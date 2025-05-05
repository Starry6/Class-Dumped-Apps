@interface LynxResourceRequest : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) q type;
@property (nonatomic) @ requestParams;
@property (nonatomic) q mode;
- (id)getLynxResourceServiceRequestParams;
- (id)initWithUrl:andRequestParams:;
- (id)initWithUrl:type:;
- (id)url;
- (long long)type;
- (void).cxx_destruct;
- (long long)mode;
- (void)setMode:;
- (id)requestParams;
- (void)setRequestParams:;
- (id)initWithUrl:;
@end
