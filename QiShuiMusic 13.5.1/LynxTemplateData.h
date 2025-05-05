@interface LynxTemplateData : NSObject
@property (nonatomic) NSString processorName;
@property (nonatomic) NSArray updateActions;
- (void)updateWithJson:;
- (BOOL)checkIsLegalData;
- (id)deepClone;
- (id)getDataForJSThread;
- (id)initWithDictionary:useBoolLiterals:;
- (id)initWithJson:useBoolLiterals:;
- (void)markState:;
- (void)setObject:withKey:;
- (void)updateBool:forKey:;
- (void)updateDouble:forKey:;
- (void)updateInteger:forKey:;
- (void)updateObject:forKey:;
- (void)updateWithLepusValue:;
- (void)updateWithTemplateData:;
- (BOOL)isReadOnly;
- (void)updateWithDictionary:;
- (id)dictionary;
- (void)markReadOnly;
- (id)init;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)updateActions;
- (id)processorName;
- (id)initWithJson:;
@end
