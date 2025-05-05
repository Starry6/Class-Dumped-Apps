@interface APRiskRPCDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sendConfigReportRequest:config:;
- (id)sendStaticRequest:config:;
- (BOOL)updateLog:config:;
+ (id)convertConfigRequest:;
+ (id)convertConfigResponse:;
+ (id)convertRequest:;
+ (id)convertResponse:;
@end
