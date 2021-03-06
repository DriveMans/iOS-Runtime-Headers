/* Generated by RuntimeBrowser.
 */

@protocol AVConferencePreviewClientDelegate

@optional

- (void)cameraDidBecomeAvailable:(unsigned int)arg1;
- (void)didChangeLocalScreenAttributes:(VideoAttributes *)arg1;
- (void)didChangeLocalVideoAttributes:(VideoAttributes *)arg1;
- (void)didGetSnapshot:(NSData *)arg1;
- (void)didPausePreview;
- (void)didReceiveCommError;
- (void)didReceiveErrorFromCamera:(unsigned int)arg1 error:(NSError *)arg2;
- (void)didReceiveFirstPreviewFrameFromCamera:(unsigned int)arg1;
- (void)didStartPreview;
- (void)didStopPreview;

@end
