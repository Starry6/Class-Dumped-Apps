@interface CKObjCProperty : NSObject
@property (nonatomic) CKObjCType type;
@property (nonatomic) NSString name;
@property (nonatomic) : getterSelector;
@property (nonatomic) : setterSelector;
- (SEL)setterSelector;
- (SEL)getterSelector;
- (id)type;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
@end
