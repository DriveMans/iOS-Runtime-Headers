/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleAlbumProvider : NSObject <PXPeopleDataSourceDelegate, PXPhotoLibraryUIChangeObserver> {
    int  _cachedPeopleCount;
    BOOL  _didInitiatePeopleCountFetchRequest;
    BOOL  _didInitiateReCacheRequest;
    PXPeoplePersonDataSource * _favoriteDS;
    BOOL  _favoriteLoaded;
    NSMutableDictionary * _fetchedContainers;
    NSMutableArray * _imageCache;
    struct CGSize { 
        float width; 
        float height; 
    }  _imageSize;
    PHFetchResult * _importantPeopleCountFetchResult;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    BOOL  _notificationSent;
    PHFetchResult * _ordinaryPeopleCountFetchResult;
    PXPeoplePersonDataSource * _otherDS;
    BOOL  _otherLoaded;
    PHPhotoLibrary * _photoLibrary;
    PXPeopleProgressManager * _progressMgr;
    id /* block */  _requestCompletion;
}

@property (nonatomic) int cachedPeopleCount;
@property (getter=isCountAvailable, nonatomic, readonly) BOOL countAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXPeoplePersonDataSource *favoriteDS;
@property (nonatomic) BOOL favoriteLoaded;
@property (nonatomic, retain) NSMutableDictionary *fetchedContainers;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableArray *imageCache;
@property (nonatomic) struct CGSize { float x1; float x2; } imageSize;
@property (nonatomic, retain) PHFetchResult *importantPeopleCountFetchResult;
@property (nonatomic) BOOL notificationSent;
@property (nonatomic, retain) PHFetchResult *ordinaryPeopleCountFetchResult;
@property (nonatomic, retain) PXPeoplePersonDataSource *otherDS;
@property (nonatomic) BOOL otherLoaded;
@property (nonatomic, readonly) int peopleCount;
@property (nonatomic, retain) PXPeopleProgressManager *progressMgr;
@property (nonatomic, copy) id /* block */ requestCompletion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_asyncAddImagesToCacheWithItems:(id)arg1 completion:(id /* block */)arg2;
- (void)_invalidateCache;
- (id)_members;
- (void)_reCacheImagesCompletion:(id /* block */)arg1;
- (BOOL)_shouldShowInterstitialProgress;
- (void)_updateCachedCountIfNeeded;
- (void)_updatePeopleCountFetchResultsIfNeeded;
- (int)cachedPeopleCount;
- (void)dealloc;
- (id)favoriteDS;
- (BOOL)favoriteLoaded;
- (id)fetchedContainers;
- (id)imageCache;
- (void)imageCacheDidChanged:(id)arg1;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)importantPeopleCountFetchResult;
- (id)init;
- (BOOL)isCountAvailable;
- (BOOL)notificationSent;
- (id)ordinaryPeopleCountFetchResult;
- (id)otherDS;
- (BOOL)otherLoaded;
- (int)peopleCount;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (id)peopleViewController;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)progressMgr;
- (void)requestAlbumImagesWithSize:(struct CGSize { float x1; float x2; })arg1 completion:(id /* block */)arg2;
- (id /* block */)requestCompletion;
- (void)setCachedPeopleCount:(int)arg1;
- (void)setFavoriteDS:(id)arg1;
- (void)setFavoriteLoaded:(BOOL)arg1;
- (void)setFetchedContainers:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setImportantPeopleCountFetchResult:(id)arg1;
- (void)setNotificationSent:(BOOL)arg1;
- (void)setOrdinaryPeopleCountFetchResult:(id)arg1;
- (void)setOtherDS:(id)arg1;
- (void)setOtherLoaded:(BOOL)arg1;
- (void)setProgressMgr:(id)arg1;
- (void)setRequestCompletion:(id /* block */)arg1;

@end
