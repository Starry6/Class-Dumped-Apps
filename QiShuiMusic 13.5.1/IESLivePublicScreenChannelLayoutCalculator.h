@interface IESLivePublicScreenChannelLayoutCalculator : IESLivePublicScreenNormalLayoutCalculator
- (double)calculateAvoidHeightWithConstHeight:;
- (double)calculateHeightForCommon:;
- (double)calculateMessageListHeightWithConstHeight:;
- (BOOL)shouldExtent;
@end
