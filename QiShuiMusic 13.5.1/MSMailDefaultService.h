@interface MSMailDefaultService : MSService
@property (nonatomic) BOOL shouldLaunchMobileMail;
- (id)init;
- (BOOL)shouldLaunchMobileMail;
- (void)setShouldLaunchMobileMail:;
- (id)_handleMessageSendFailure:message:messageIndex:context:;
- (id)_createServiceOnQueue:;
- (BOOL)_launchMobileMailSuspendedError:;
@end
