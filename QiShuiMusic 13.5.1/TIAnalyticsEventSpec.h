@interface TIAnalyticsEventSpec : NSObject
@property (nonatomic) NSDictionary fieldSpecsByName;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL isInputModeRequired;
@property (nonatomic) NSArray fieldSpecs;
- (id)fieldSpecsByName;
- (BOOL)isInputModeRequired;
- (id)fieldSpecs;
- (id)fieldSpecWithName:;
- (void).cxx_destruct;
- (id)name;
- (id)initWithName:inputModeRequired:fieldSpecs:;
+ (id)eventSpecWithName:inputModeRequired:;
+ (id)eventSpecWithName:inputModeRequired:fieldSpecs:;
@end
