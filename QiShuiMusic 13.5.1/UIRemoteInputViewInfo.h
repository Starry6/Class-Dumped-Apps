@interface UIRemoteInputViewInfo : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) {NSEdgeInsets=dddd} insets;
@property (nonatomic) NSInteger processId;
@property (nonatomic) I contextId;
@property (nonatomic) RTIInputViewInfo rtiInputViewInfo;
- (void)setContextId:;
- (int)processId;
- (unsigned int)contextId;
- (void)setInsets:;
- (void)setProcessId:;
- (id)insets;
- (id)description;
- (void)setSize:;
- (id)size;
- (id)rtiInputViewInfo;
@end
