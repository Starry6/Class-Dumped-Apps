@interface AWEPlayInteractionDescriptionTrack : NSObject
+ (void)trackVideoFunctionDurationIfNeeded;
+ (void)trackVideoFunctionClickWithParserContext:extraModel:clickMethod:;
+ (void)trackTitleExpandWithActionType:parserContext:;
+ (void)trackVideoFunctionShowWithParserContext:extraModel:showMethod:;
+ (void)trackTitleExpandWithActionType:spreadMethod:parserContext:;
+ (BOOL)feedInteractionFunctionTrackEnable;
+ (id)functionNameWithParserContext:extraModel:;
+ (void)trackVideoFunctionDurationWithParserContext:extraModel:clickMethod:;
@end
