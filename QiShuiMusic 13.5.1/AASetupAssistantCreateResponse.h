@interface AASetupAssistantCreateResponse : AAResponse
@property (nonatomic) NSNumber status;
@property (nonatomic) NSString statusMessage;
@property (nonatomic) NSString personID;
@property (nonatomic) NSString appleID;
@property (nonatomic) NSString HSAAction;
@property (nonatomic) NSString HSAData;
- (id)appleID;
- (id)personID;
- (void).cxx_destruct;
- (id)status;
- (id)statusMessage;
- (id)HSAAction;
- (id)HSAData;
@end
