@interface LynxResourceServiceRequestOperation : NSObject
@property (nonatomic) NSString url;
@property (nonatomic) <IESForestRequestOperation> requestOperation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRequestOperation:;
- (id)requestOperation;
- (void)setRequestOperation:;
- (id)url;
- (BOOL)cancel;
- (void)setUrl:;
- (void).cxx_destruct;
@end
