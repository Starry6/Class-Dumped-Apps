@interface CNUIPropertyGroupItemIDSHandle : NSObject
@property (nonatomic) CNUIContactPropertyIDSHandle contactPropertyHandle;
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
- (id)contactProperty;
- (id)_cnui_IDSIDRepresentation;
- (id)initWithPropertyGroupItem:;
- (id)contactPropertyHandle;
+ (BOOL)isSupportedGroupItem:;
+ (BOOL)supportsPropertyGroupItem:;
@end
