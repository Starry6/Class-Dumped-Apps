@interface AWESearchMiddlePagePOIToastMessageInfo : NSObject
@property (nonatomic) BOOL canSendCachedMessage;
@property (nonatomic) BOOL cachedMessageExpired;
- (void)setCanSendCachedMessage:;
- (void)setCachedMessageExpired:;
- (BOOL)canSendCachedMessage;
- (BOOL)isCachedMessageExpired;
@end
