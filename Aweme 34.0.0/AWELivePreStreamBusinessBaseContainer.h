@interface AWELivePreStreamBusinessBaseContainer : NSObject
@property (nonatomic) AWELivePreStreamContext context;
@property (nonatomic) AWELivePreStreamConfigCenter configCenter;
@property (nonatomic) NSMutableArray businessElementsArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithViewController:context:;
- (void)addElementByClassName:;
- (void)addElementToArray:;
- (void)setConfigCenter:;
- (id)configCenter;
- (void)setupBusinessContainer;
- (Class)elementClassWithElementName:;
- (id)businessElementsArray;
- (void)setBusinessElementsArray:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (long long)elementCount;
- (Class)classForName:;
@end
