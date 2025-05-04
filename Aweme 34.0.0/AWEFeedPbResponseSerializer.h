@interface AWEFeedPbResponseSerializer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)responseObjectForResponse:data:responseError:resultError:;
+ (id)modelMergePropertyConfig;
+ (id)modelFromPBResponse:error:;
+ (void)_handleRawAdDataInAwemeList:;
+ (id)serializer;
@end
