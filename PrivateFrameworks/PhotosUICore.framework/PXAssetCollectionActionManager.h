/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetCollectionActionManager : PXActionManager {
    <PXDisplayAssetCollection> * _assetCollection;
    PXDisplayTitleInfo * _displayTitleInfo;
    PHFetchResult * _people;
}

@property (nonatomic, readonly) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic, readonly) PXDisplayTitleInfo *displayTitleInfo;
@property (nonatomic, retain) PHFetchResult *people;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)displayTitleInfo;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2;
- (id)people;
- (void)setPeople:(id)arg1;

@end