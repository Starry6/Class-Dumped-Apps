@interface AWEElementRegistrationForm : NSObject
@property (nonatomic) NSMutableDictionary elementMaps;
@property (nonatomic) NSArray allElementIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registElement:;
- (id)elementInfoWithID:;
- (id)elementMaps;
- (void)registWithElementInfo:;
- (id)allElementIDs;
- (id)getAllElementIDs;
- (void)setElementMaps:;
- (void)setAllElementIDs:;
- (void).cxx_destruct;
+ (id)defaultForm;
@end
