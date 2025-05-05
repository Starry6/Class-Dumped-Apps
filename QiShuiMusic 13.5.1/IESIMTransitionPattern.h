@interface IESIMTransitionPattern : NSObject
@property (nonatomic) Q typeMask;
@property (nonatomic) Q interactionMask;
@property (nonatomic) Protocol fromProtocol;
@property (nonatomic) Protocol toProtocol;
@property (nonatomic) NSString contextProviderClassName;
- (unsigned long long)interactionMask;
- (id)contextProviderClassName;
- (id)fromProtocol;
- (void)setContextProviderClassName:;
- (void)setFromProtocol:;
- (void)setInteractionMask:;
- (void)setToProtocol:;
- (void)setTypeMask:;
- (id)toProtocol;
- (unsigned long long)typeMask;
- (void).cxx_destruct;
@end
