@interface AWEIMChatCellHintTypeConfigModel : NSObject
@property (nonatomic) Q hintType;
@property (nonatomic) q lineBreakMode;
@property (nonatomic) BOOL isCompatibleWithMention;
@property (nonatomic) BOOL isCompatibleWithTimeText;
@property (nonatomic) BOOL isCompatibleWithSnapshot;
@property (nonatomic) NSSet incompatibleMessageTabModes;
- (BOOL)isCompatibleWithTimeText;
- (unsigned long long)hintType;
- (void)setHintType:;
- (BOOL)isCompatibleWithSnapshot;
- (BOOL)isCompatibleWithMention;
- (id)incompatibleMessageTabModes;
- (void)setIsCompatibleWithMention:;
- (void)setIsCompatibleWithTimeText:;
- (void)setIsCompatibleWithSnapshot:;
- (void)setIncompatibleMessageTabModes:;
- (long long)lineBreakMode;
- (void)setLineBreakMode:;
- (void).cxx_destruct;
@end
