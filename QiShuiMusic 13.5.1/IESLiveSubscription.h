@interface IESLiveSubscription : NSObject
@property (nonatomic) BOOL isSign;
@property (nonatomic) BOOL disposed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isDisposed;
- (BOOL)isSign;
- (void)setDisposed:;
- (void)setIsSign:;
- (void)dispose;
@end
