@interface WFContextualActionFile : NSObject
@property (nonatomic) NSURL fileURL;
@property (nonatomic) UTType type;
- (void)dispose;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)type;
- (void).cxx_destruct;
- (id)fileURL;
- (id)description;
- (id)initWithFileURL:type:;
+ (BOOL)supportsSecureCoding;
@end
