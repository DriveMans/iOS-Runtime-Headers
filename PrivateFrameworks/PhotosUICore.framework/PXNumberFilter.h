/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNumberFilter : PXObservable <PXMutableNumberFilter> {
    float  _input;
    double  _lastTime;
    struct { 
        BOOL output; 
    }  _needsUpdateFlags;
    float  _output;
    double  _time;
}

@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) float input;
@property (nonatomic, readonly) double lastTime;
@property (setter=_setOutput:, nonatomic) float output;
@property (readonly) Class superclass;
@property (nonatomic) double time;

- (void)_invalidateOutput;
- (BOOL)_needsUpdate;
- (void)_setLastTime:(double)arg1;
- (void)_setNeedsUpdate;
- (void)_setOutput:(float)arg1;
- (void)_updateIfNeeded;
- (void)_updateOutputIfNeeded;
- (double)currentTime;
- (void)didPerformChanges;
- (id)init;
- (id)initWithInput:(float)arg1;
- (float)initialOutputForInput:(float)arg1;
- (float)input;
- (double)lastTime;
- (id)mutableChangeObject;
- (float)output;
- (void)performChanges:(id /* block */)arg1;
- (void)setInput:(float)arg1;
- (void)setTime:(double)arg1;
- (double)time;
- (float)updatedOutput;

@end
