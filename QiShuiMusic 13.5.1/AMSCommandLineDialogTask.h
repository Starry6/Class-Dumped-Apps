@interface AMSCommandLineDialogTask : AMSTask
@property (nonatomic) AMSDialogRequest request;
@property (nonatomic) double maximumDialogWidth;
@property (nonatomic) double minimumDialogWidth;
@property (nonatomic) double dialogPadding;
@property (nonatomic) q automaticButtonSelection;
- (id)initWithRequest:;
- (id)present;
- (id)request;
- (void).cxx_destruct;
- (id)_createHorizontolLineWithWidth:;
- (id)_createLinesFromText:width:;
- (id)_createText:width:centered:omitLeftPipe:;
- (id)_createTextfieldWithTextfield:width:;
- (long long)_gatherButtonInput;
- (id)_gatherTextfieldInput;
- (id)_getUserInput;
- (void)_printMessage:;
- (double)maximumDialogWidth;
- (void)setMaximumDialogWidth:;
- (double)minimumDialogWidth;
- (void)setMinimumDialogWidth:;
- (double)dialogPadding;
- (void)setDialogPadding:;
- (long long)automaticButtonSelection;
- (void)setAutomaticButtonSelection:;
@end
