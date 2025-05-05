@interface WBSContactAutoFillSet : NSObject
@property (nonatomic) NSDictionary controlIDToValueMap;
@property (nonatomic) NSString label;
@property (nonatomic) NSArray fillDisplayProperties;
@property (nonatomic) NSArray skipDisplayProperties;
@property (nonatomic) NSSet propertiesToFillOrSkip;
- (id)label;
- (void).cxx_destruct;
- (id)controlIDToValueMap;
- (id)fillDisplayProperties;
- (id)initWithControlIDToValueMap:label:fillDisplayProperties:skipDisplayProperties:propertiesToFillOrSkip:;
- (id)skipDisplayProperties;
- (id)propertiesToFillOrSkip;
+ (id)displayStringsForSkipMatches:matchesForForm:formDataController:;
+ (id)displayStringsForFillMatches:skipMatches:matchesForForm:label:formDataController:;
@end
