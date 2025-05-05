@interface CADDiagnosticOperationGroup : CADOperationGroup
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)accessGranted;
- (void)CADDiagnosticsCollectWithToken:options:reply:;
- (void)CADDiagnosticsCancelCollectionWithToken:reply:;
@end
