@interface CalCancellationTokenSource : NSObject
@property (nonatomic) <CalCancellationToken> token;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (BOOL)isCancelled;
- (id)token;
@end
