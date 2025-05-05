@interface BMPersonEntity : NSObject
@property (nonatomic) NSArray names;
@property (nonatomic) NSString customId;
@property (nonatomic) NSString contactId;
@property (nonatomic) NSArray emailAddresses;
@property (nonatomic) NSArray addresses;
@property (nonatomic) NSArray phoneNumbers;
@property (nonatomic) NSArray socialMediaHandles;
@property (nonatomic) NSDictionary attributes;
- (id)phoneNumbers;
- (id)initWithProtoData:;
- (id)emailAddresses;
- (id)proto;
- (id)encodeAsProto;
- (id)attributes;
- (id)names;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)contactId;
- (BOOL)isEqual:;
- (id)addresses;
- (id)customId;
- (id)socialMediaHandles;
- (id)initWithNames:customId:contactId:emailAddresses:addresses:phoneNumbers:socialMediaHandles:attributes:;
@end
