@interface AKAuthorizationTVServicePresenter : NSObject
- (long long)_typeFromString:;
- (long long)typeOfMessage:;
- (id)buildDidTapNotificationMessage;
- (id)buildDidStartServerAuthorizationMessage;
- (id)buildFetchAppIconMessage;
- (id)buildFetchAppIconReplyWithImageData:imageScale:;
- (id)_stringForType:;
- (id)_filterDeprecatedType:;
@end
