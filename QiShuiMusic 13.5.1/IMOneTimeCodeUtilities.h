@interface IMOneTimeCodeUtilities : NSObject
- (BOOL)isValidOneTimeCode:;
- (id)createOTCFromMessageBody:sender:guid:;
@end
