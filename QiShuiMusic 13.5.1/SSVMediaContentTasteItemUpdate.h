@interface SSVMediaContentTasteItemUpdate : NSObject
@property (nonatomic) SSVMediaContentTasteItem item;
@property (nonatomic) NSDate updateDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)item;
- (id)copyXPCEncoding;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)updateDate;
- (void)setUpdateDate:;
+ (BOOL)supportsSecureCoding;
@end
