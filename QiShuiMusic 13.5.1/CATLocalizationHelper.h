@interface CATLocalizationHelper : NSObject
@property (nonatomic) NSBundle bundle;
- (id)bundle;
- (void).cxx_destruct;
- (id)initWithBundle:;
- (id)stringByKeyForTableName:;
- (id)stringsForKey:value:table:;
+ (id)helperForBundle:;
@end
