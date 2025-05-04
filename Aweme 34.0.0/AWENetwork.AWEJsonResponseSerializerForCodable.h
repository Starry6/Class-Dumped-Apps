@interface AWENetwork.AWEJsonResponseSerializerForCodable : NSObject
@property (nonatomic) NSSet acceptableContentTypes;
- (id)acceptableContentTypes;
- (void)setAcceptableContentTypes:;
- (id)responseObjectForResponse:jsonObj:responseError:resultError:;
- (id)init;
- (void).cxx_destruct;
+ (id)serializer;
@end
