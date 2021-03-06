/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCReportingMescalSetupCompletionEvent : NSObject <MPCReportingEvent> {
    NSError * _error;
    double  _setupDuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned int hash;
@property (nonatomic) double setupDuration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (BOOL)isValidReportingEvent;
- (unsigned int)reportingEventType;
- (void)setError:(id)arg1;
- (void)setSetupDuration:(double)arg1;
- (double)setupDuration;

@end
