@interface CLSHandoutRecipient : CLSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString classID;
@property (nonatomic) NSString personID;
@property (nonatomic) NSString parentObjectID;
- (id)personID;
- (void)setPersonID:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)classID;
- (id)description;
- (id)_init;
- (id)dictionaryRepresentation;
- (BOOL)validateObject:;
- (void)setClassID:;
- (id)initWithClassID:personID:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end
