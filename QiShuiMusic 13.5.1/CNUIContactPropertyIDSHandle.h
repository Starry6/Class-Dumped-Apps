@interface CNUIContactPropertyIDSHandle : NSObject
@property (nonatomic) NSString idsID;
@property (nonatomic) CNContactProperty contactProperty;
@property (nonatomic) NSString _cnui_IDSIDRepresentation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithContactProperty:;
- (id)contactProperty;
- (id)_cnui_IDSIDRepresentation;
- (id)idsID;
+ (id)supportedContactPropertyKeys;
+ (id)idsIDForPhoneNumber:;
+ (id)idsIDForEmail:;
@end
