@interface BSAuditHistoryItem : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) NSString value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (id)initWithCoder:;
- (id)date;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (void)setValue:;
- (void).cxx_destruct;
- (void)setDate:;
- (id)description;
- (id)value;
+ (BOOL)supportsSecureCoding;
+ (id)itemWithString:;
+ (id)itemWithWithFormat:;
@end
