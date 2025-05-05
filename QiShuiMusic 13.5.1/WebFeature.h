@interface WebFeature : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString preferenceKey;
@property (nonatomic) NSString name;
@property (nonatomic) NSString details;
@property (nonatomic) BOOL defaultValue;
@property (nonatomic) BOOL hidden;
- (void)dealloc;
- (id)key;
- (BOOL)defaultValue;
- (id)description;
- (id)name;
- (id)details;
- (BOOL)isHidden;
- (id)preferenceKey;
- (id)initWithKey:preferenceKey:name:details:defaultValue:hidden:;
@end
