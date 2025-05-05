@interface FPImportItemError : NSObject
@property (nonatomic) NSString itemIdentifier;
@property (nonatomic) NSError error;
- (id)itemIdentifier;
- (id)json;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithItemIdentifier:error:;
+ (BOOL)supportsSecureCoding;
@end
