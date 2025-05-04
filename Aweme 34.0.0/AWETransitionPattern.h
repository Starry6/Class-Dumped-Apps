@interface AWETransitionPattern : NSObject
@property (nonatomic) Q typeMask;
@property (nonatomic) Q interactionMask;
@property (nonatomic) Protocol fromProtocol;
@property (nonatomic) Protocol toProtocol;
@property (nonatomic) NSString contextProviderClassName;
- (unsigned long long)typeMask;
- (void)setTypeMask:;
- (unsigned long long)interactionMask;
- (void)setInteractionMask:;
- (id)fromProtocol;
- (void)setFromProtocol:;
- (id)toProtocol;
- (void)setToProtocol:;
- (id)contextProviderClassName;
- (void)setContextProviderClassName:;
- (void).cxx_destruct;
@end
