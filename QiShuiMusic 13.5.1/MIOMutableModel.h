@interface MIOMutableModel : MIOModel
@property (nonatomic) MIOModelDescription modelDescription;
- (id)modelDescription;
- (id)copyWithZone:;
- (void)setModelDescription:;
@end
