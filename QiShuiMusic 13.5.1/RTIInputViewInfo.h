@interface RTIInputViewInfo : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) {NSEdgeInsets=dddd} insets;
@property (nonatomic) I contextId;
- (id)uiRemoteInputViewInfoForProcessId:;
- (void)setContextId:;
- (unsigned int)contextId;
- (void)setInsets:;
- (id)initWithCoder:;
- (id)insets;
- (void)encodeWithCoder:;
- (id)description;
- (void)setSize:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)size;
+ (BOOL)supportsSecureCoding;
@end
