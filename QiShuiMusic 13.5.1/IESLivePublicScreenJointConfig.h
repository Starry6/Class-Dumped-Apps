@interface IESLivePublicScreenJointConfig : NSObject
@property (nonatomic) UIColor nameColor;
@property (nonatomic) UIFont nameFont;
@property (nonatomic) BOOL needFilterBadge;
@property (nonatomic) NSString namePrefix;
@property (nonatomic) NSString nameSuffix;
@property (nonatomic) NSString suffixString;
- (BOOL)needFilterBadge;
- (void)setNeedFilterBadge:;
- (void)setNameSuffix:;
- (void)setNamePrefix:;
- (void).cxx_destruct;
- (id)nameSuffix;
- (id)namePrefix;
- (void)setNameFont:;
- (id)nameFont;
- (id)nameColor;
- (void)setNameColor:;
- (id)suffixString;
- (void)setSuffixString:;
@end
