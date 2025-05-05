@interface CLSArchivedHandout : CLSAbstractHandout
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray attachments;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_init;
- (id)attachments;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end
