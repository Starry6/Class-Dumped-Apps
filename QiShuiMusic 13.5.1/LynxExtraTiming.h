@interface LynxExtraTiming : NSObject
@property (nonatomic) Q openTime;
@property (nonatomic) Q containerInitStart;
@property (nonatomic) Q containerInitEnd;
@property (nonatomic) Q prepareTemplateStart;
@property (nonatomic) Q prepareTemplateEnd;
- (unsigned long long)containerInitEnd;
- (unsigned long long)containerInitStart;
- (unsigned long long)openTime;
- (unsigned long long)prepareTemplateEnd;
- (unsigned long long)prepareTemplateStart;
- (void)setContainerInitEnd:;
- (void)setContainerInitStart:;
- (void)setOpenTime:;
- (void)setPrepareTemplateEnd:;
- (void)setPrepareTemplateStart:;
- (id)toDictionary;
@end
