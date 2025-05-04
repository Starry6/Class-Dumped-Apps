@interface AWELiveBusinessBaseElement : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWELivePreStreamContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (BOOL)shouldActivateElementWithData:;
- (void)preloadElement;
- (void)setModel:;
- (id)initWithContext:;
- (id)model;
- (void)setData:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (BOOL)shouldActivateElement;
@end
