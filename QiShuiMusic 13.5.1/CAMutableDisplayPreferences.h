@interface CAMutableDisplayPreferences : CADisplayPreferences
@property (nonatomic) BOOL matchContent;
@property (nonatomic) NSString preferredHdrMode;
- (id)copyWithZone:;
@end
