/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
 */

@interface NPTOSidecarPhoto : NPTOPhoto {
    NSDictionary * _attributes;
    UIImage * _fullImage;
    NSString * _path;
    NSDictionary * _supplement;
}

@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } contentOffset;
@property (nonatomic, readonly) double irisDuration;
@property (nonatomic, readonly) double irisStillDisplayTime;
@property (nonatomic, readonly) NSURL *irisURL;
@property (nonatomic, readonly) BOOL isPhotoIris;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSDictionary *supplement;
@property (nonatomic, readonly) float zoomScale;

- (void).cxx_destruct;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (id)eagerlyDecodedFullImage;
- (id)faceRegions;
- (id)fullImage;
- (id)identifier;
- (id)initWithPath:(id)arg1;
- (double)irisDuration;
- (double)irisStillDisplayTime;
- (id)irisURL;
- (BOOL)isIrisVideoHidden;
- (BOOL)isPhotoIris;
- (id)lazilyDecodedFullImage;
- (id)modificationDate;
- (id)path;
- (id)supplement;
- (id)thumbnail:(int)arg1;
- (id)thumbnailFacesRegions;
- (float)zoomScale;

@end
