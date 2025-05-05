@interface IESBridgeMethodQueryResult : NSObject
@property (nonatomic) BOOL hasMethodRegardlessOfNamespace;
@property (nonatomic) IESBridgeMethod method;
- (BOOL)hasMethodRegardlessOfNamespace;
- (void)setHasMethodRegardlessOfNamespace:;
- (id)method;
- (void).cxx_destruct;
- (void)setMethod:;
@end
