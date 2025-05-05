@interface LARightContextHandler : NSObject
@property (nonatomic) <LARightContextHandlerDelegate> delegate;
@property (nonatomic) LAContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)context;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)setContext:;
- (void)contextDidBecomeInvalid:;
@end
