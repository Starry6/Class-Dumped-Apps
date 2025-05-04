@interface AWEPlayInteractionNewBottomElement : AWEPlayInteractionBaseElement
@property (nonatomic) NSNumber priority;
@property (nonatomic) BOOL hasMutex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (void)configWithParamDict:;
- (BOOL)shouldAppearWithData:;
- (BOOL)hasMutex;
- (id)bottomElementContainer;
- (void)setHasMutex:;
- (id)priority;
- (id)identifier;
- (void)setPriority:;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)elementPosition;
@end
