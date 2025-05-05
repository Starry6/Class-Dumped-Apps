@interface MTFinalValidationFilter : MTObject
@property (nonatomic) BOOL shouldApplyDeRes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)apply:;
- (void)validateFields:;
- (BOOL)shouldApplyDeRes;
- (void)setShouldApplyDeRes:;
@end
