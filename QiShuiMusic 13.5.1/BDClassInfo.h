@interface BDClassInfo : NSObject
@property (nonatomic) # cls;
@property (nonatomic) # superCls;
@property (nonatomic) # metaCls;
@property (nonatomic) BOOL isMeta;
@property (nonatomic) NSString name;
@property (nonatomic) BDClassInfo superClassInfo;
@property (nonatomic) NSDictionary ivarInfos;
@property (nonatomic) NSDictionary methodInfos;
@property (nonatomic) NSDictionary propertyInfos;
- (Class)metaCls;
- (BOOL)isMeta;
- (id)ivarInfos;
- (id)methodInfos;
- (BOOL)needUpdate;
- (id)propertyInfos;
- (void)setNeedUpdate;
- (id)superClassInfo;
- (Class)superCls;
- (void)_update;
- (Class)cls;
- (void).cxx_destruct;
- (id)name;
- (id)initWithClass:;
+ (id)classInfoWithClass:;
+ (id)classInfoWithClassName:;
@end
