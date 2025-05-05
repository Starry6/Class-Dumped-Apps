@interface TRIAssignment : TRIPBMessage
@property (nonatomic) NSInteger languageOneOfCase;
@property (nonatomic) TRINSExpressionAssignmentLanguage nsexpressionLanguage;
@property (nonatomic) TRIUIAssignmentLanguage uiLanguage;
@property (nonatomic) TRICoreMLAssignmentLanguage coremlLanguage;
@property (nonatomic) TRIPlanOutAssignmentLanguage planoutLanguage;
@property (nonatomic) TRIRolloutAssignmentLanguage rolloutLanguage;
+ (id)descriptor;
@end
