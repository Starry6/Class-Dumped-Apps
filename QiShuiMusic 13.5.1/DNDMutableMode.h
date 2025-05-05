@interface DNDMutableMode : DNDMode
@property (nonatomic) NSString symbolImageName;
@property (nonatomic) NSString tintColorName;
@property (nonatomic) NSString name;
- (void)setName:;
- (void)setSymbolImageName:;
- (void)setTintColorName:;
- (id)copyWithZone:;
@end
