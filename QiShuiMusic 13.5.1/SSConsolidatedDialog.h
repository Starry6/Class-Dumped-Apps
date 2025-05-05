@interface SSConsolidatedDialog : NSObject
@property (nonatomic) NSString cancelLabel;
@property (nonatomic) NSString reason;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)reason;
- (void)setTitle:;
- (void)setReason:;
- (id)title;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)cancelLabel;
- (void)setCancelLabel:;
@end
