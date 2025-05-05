@interface IESLiveInteractVideoOperationNode : NSObject
@property (nonatomic) BOOL close;
@property (nonatomic) Q state;
@property (nonatomic) BOOL noAPIRequest;
@property (nonatomic) BOOL asyncAPIRequest;
- (BOOL)asyncAPIRequest;
- (BOOL)noAPIRequest;
- (void)setAsyncAPIRequest:;
- (void)setClose:;
- (void)setNoAPIRequest:;
- (void)setState:;
- (BOOL)close;
- (unsigned long long)state;
@end
