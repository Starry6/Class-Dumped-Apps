@interface AWEGDefaultDitoProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registDitoAgent:;
- (Class)lynxClass;
- (void)registDitoExtension:;
- (void)registDitoAction:;
@end
