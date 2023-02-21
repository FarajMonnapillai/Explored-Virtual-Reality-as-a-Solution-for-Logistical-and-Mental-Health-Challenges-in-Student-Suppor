#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826;
// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink>
struct Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3;
// System.Action`1<Photon.Voice.Unity.Speaker>
struct Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490;
// System.Action`2<System.Int32Enum,System.Int32Enum>
struct Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2;
// Fusion.ChangedDelegate`1<Photon.Voice.Fusion.VoiceNetworkObject>
struct ChangedDelegate_1_t03CD478B3545EA55EBD4A43E4D35BD085AEDF09C;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80;
// System.Collections.Generic.Dictionary`2<System.Int32,Fusion.NetworkRunner>
struct Dictionary_2_t8043B6C785B439524A8755BCF6A5CC3612CFCFCD;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B;
// System.Collections.Generic.Dictionary`2<Fusion.NetworkObjectGuid,Fusion.NetworkObject>
struct Dictionary_2_t3BC581E5E3414F2C3884E7EA3F3D93105565B726;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// Fusion.FastReferenceList`1<Fusion.NetworkBehaviour>
struct FastReferenceList_1_t2DC9499F4E148A6E8794A7A5E3F1A83D98AA0D76;
// System.Func`1<Photon.Voice.IAudioDesc>
struct Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// Photon.Voice.IAudioOut`1<System.Single>
struct IAudioOut_1_t52874464F649CB4D8674B0F14144AADE14995DF9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.LinkedList`1<Fusion.RunnerVisibilityNode>
struct LinkedList_1_t3813413FE4ECB2279D0C7AC05BD288865A34356B;
// System.Collections.Generic.List`1<Fusion.INetworkRunnerCallbacks>
struct List_1_tA8148AA407AA53B8F5D3BFB8B1AE9D9C941E8545;
// System.Collections.Generic.List`1<Fusion.NetworkId>
struct List_1_t8673857563BA6C5F285B36C12CE318D403D7CE03;
// System.Collections.Generic.List`1<Fusion.NetworkObject>
struct List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82;
// System.Collections.Generic.List`1<Fusion.NetworkRunner>
struct List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Recorder>
struct List_1_tBFD6B7B62FB7763BC57224ED666A855ACCD05536;
// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink>
struct List_1_t823310AB4F398AE467887CC898545B689B70003F;
// System.Collections.Generic.List`1<Fusion.SessionInfo>
struct List_1_t1401F7FA1DF1659F914B5A8D1A6B07E195A110AA;
// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker>
struct List_1_t581C6CC97545A3BE378779CD0B20D123D6DCF950;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15;
// Fusion.NetworkBehaviourCallbacks`1<Photon.Voice.Fusion.VoiceNetworkObject>
struct NetworkBehaviourCallbacks_1_tDCBF78F749654278A55E3A2335EE2C487A40524B;
// Fusion.NetworkObjectRefMap`1<Fusion.NetworkObject>
struct NetworkObjectRefMap_1_t09E8E07F1985CA0C12E271256B24BBFF00DB90F6;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02;
// System.Collections.Generic.Queue`1<Fusion.NetworkRunner/SpawnQueueEntry>
struct Queue_1_t15EDAB8C3525B4DF694D0B2011D38D47CDCABD5D;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Fusion.SessionProperty>
struct ReadOnlyDictionary_2_tF107A4E266D96B1C819AC88DCD8B01E10FE1407B;
// System.Collections.Generic.Stack`1<Fusion.NetworkRunner/NetworkObjectInactivityGuard>
struct Stack_1_t0F5E34EE9211205B247AA0F814825DB9E5DD48B7;
// System.Threading.Tasks.TaskCompletionSource`1<System.ValueTuple`2<Fusion.ShutdownReason,System.String>>
struct TaskCompletionSource_1_tB8CC3005937DC70B6B78A3B987DA84E5BDB3FED6;
// System.Threading.Tasks.TaskCompletionSource`1<System.ValueTuple`5<System.Boolean,System.Int32,System.Int32,System.UInt32,System.Byte[]>>
struct TaskCompletionSource_1_t9ED39B9FD79B771ECAD656817DB0F8370498BFAD;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// Photon.Voice.IOS.AudioSessionCategoryOption[]
struct AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Fusion.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_t60B9B079110E3B7AAB961DDA3B483DB8CDD56F6F;
// Fusion.NetworkObject[]
struct NetworkObjectU5BU5D_tB73C7914AB3A2AB2BCE11B2D5AFDEAE2A48F2D0D;
// Fusion.NetworkRunner[]
struct NetworkRunnerU5BU5D_tDA69BE78BB341E0EA1AFC6CB984B303A36561725;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Photon.Voice.Unity.Recorder[]
struct RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D;
// Fusion.RpcInvokeData[]
struct RpcInvokeDataU5BU5D_tC089D978DE881DF71FAD5DD2D541A716E712F722;
// Fusion.SessionInfo[]
struct SessionInfoU5BU5D_t133FBAE4F22F8C20FF05757BDBD5CCA1937359B9;
// Fusion.SimulationBehaviour[]
struct SimulationBehaviourU5BU5D_t31031271E2F0F613B675EBEF61151021139E1C4E;
// Photon.Voice.Unity.Speaker[]
struct SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Fusion.Allocator
struct Allocator_t4184B6C7C53A6059F1EBA19A30D551CDECA2F69C;
// Fusion.Photon.Realtime.AppSettings
struct AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84;
// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// Fusion.Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// Fusion.CloudCommunicator
struct CloudCommunicator_tCE73B6724974FAEA9AC2576C14A7C2EE8951DDA6;
// Fusion.CloudServices
struct CloudServices_tC404BACC0187CF1F40CF228DCEFA39DA7D4F270C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_tC0EA7F2D58AD1B0A85B30C169AAEBD600889E448;
// Photon.Voice.DeviceFeatures
struct DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03;
// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7;
// Photon.Voice.Fusion.FusionVoiceClient
struct FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A;
// Fusion.Protocol.HostMigration
struct HostMigration_t993547CB8CCEB0971E6050E36B4EFC675D156960;
// Fusion.HostMigrationToken
struct HostMigrationToken_t6249F7ADB7BFF0D8D26E524E085F3912BAA2952D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Photon.Voice.IAudioDesc
struct IAudioDesc_t3DEEF61ECB638E82CFBFC6F26D590E2ECD3F99C2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Photon.Voice.ILogger
struct ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075;
// Fusion.INetworkObjectPool
struct INetworkObjectPool_tF26D00322AA1E7BA82ADEB63A320A51ECBB3A485;
// Fusion.INetworkSceneManager
struct INetworkSceneManager_t05C3F1812147E2AA5CD6ED8B908A9F1DFD4E52DA;
// Fusion.INetworkSceneManagerObjectResolver
struct INetworkSceneManagerObjectResolver_tB47C8F6F14AE1C58FEF5ACEDE388C12BB9F5C2EC;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F;
// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC;
// Fusion.LobbyInfo
struct LobbyInfo_t5F666E1575123FE4714F1B6067A8EAA55CFFA5CF;
// Photon.Voice.LocalVoice
struct LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Fusion.NetworkAreaOfInterestBehaviour
struct NetworkAreaOfInterestBehaviour_tD2D502D3E647D9E5E4D8A0E3D22DC9F0B674AACD;
// Fusion.NetworkBehaviour
struct NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3;
// Fusion.NetworkBehaviourCallbacks
struct NetworkBehaviourCallbacks_t4852EFBA213C9FE28E65FDB3192CD93381CF613E;
// Fusion.NetworkObject
struct NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C;
// Fusion.NetworkProjectConfig
struct NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF;
// Fusion.NetworkRunner
struct NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED;
// Fusion.Photon.Realtime.PhotonAppSettings
struct PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD;
// Photon.Voice.PhotonTransportProtocol
struct PhotonTransportProtocol_tDBD08C0E3F1F28676B0573F86D9BC19564FCA700;
// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C;
// Photon.Voice.Unity.Recorder
struct Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C;
// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB;
// Photon.Voice.Unity.RemoteVoiceLink
struct RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4;
// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373;
// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_tE9A207ADBB74A63C939A741C47F75676E0A82BEF;
// Fusion.SessionInfo
struct SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB;
// Fusion.Simulation
struct Simulation_t1D52B02F9D931E87FAEB15A3EE8B13ED014DB584;
// Fusion.SimulationBehaviourUpdater
struct SimulationBehaviourUpdater_t1D2813CD5F3514AE8854F58396E79C2053157565;
// Fusion.SimulationMessage
struct SimulationMessage_t741F8FBD24BEECD63F62791520B0C4EB9C1D101C;
// Fusion.Protocol.Snapshot
struct Snapshot_t6214C0BF071F5B4CB06F00CBA15A2299FCFD0147;
// Photon.Voice.Unity.Speaker
struct Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB;
// System.String
struct String_t;
// Photon.Realtime.SupportLogger
struct SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9;
// Photon.Voice.VoiceClient
struct VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E;
// Photon.Voice.Unity.VoiceComponentImpl
struct VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90;
// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3;
// Photon.Voice.Unity.VoiceLogger
struct VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7;
// Photon.Voice.Fusion.VoiceNetworkObject
struct VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851;
// Fusion.NetworkRunnerCallbackArgs/ConnectRequest
struct ConnectRequest_t0B36E883FB21681399384CF1BA965DC577148B66;
// Fusion.Simulation/IDeltaCompressor
struct IDeltaCompressor_tB558E97C1456399414A117E3C8E63015A0417147;
// Photon.Voice.Unity.VoiceComponentImpl/LoggerImpl
struct LoggerImpl_t2B330C78FD8F62B3C3EFEE700F502A7CCF31EAA6;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeserializeStreamMethod_tC0EA7F2D58AD1B0A85B30C169AAEBD600889E448_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializeStreamMethod_tE9A207ADBB74A63C939A741C47F75676E0A82BEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05E941BCBF65DA65C271E4EAD5960284F6DA04D4;
IL2CPP_EXTERN_C String_t* _stringLiteral069D00CD81A0C78251D80085C06669757E881DF8;
IL2CPP_EXTERN_C String_t* _stringLiteral09A40D1B7C5BF8AAC4E83B40EBD90FF52C861E55;
IL2CPP_EXTERN_C String_t* _stringLiteral14727C2772E7388F0F563659C83865E67B93D390;
IL2CPP_EXTERN_C String_t* _stringLiteral18AE67BDB4F2509BD5E917CE7C52D7DFF4D6D425;
IL2CPP_EXTERN_C String_t* _stringLiteral1BBA5BC812707330A06468A5C3E57AA6A3580C93;
IL2CPP_EXTERN_C String_t* _stringLiteral2021EEC5093E109FBE29B93E6083AE29559BE754;
IL2CPP_EXTERN_C String_t* _stringLiteral22E8580B15C9ABAB56DCCB69459657318094F648;
IL2CPP_EXTERN_C String_t* _stringLiteral3E6FBB99EF946A89020A8643C50F94224EE42BEE;
IL2CPP_EXTERN_C String_t* _stringLiteral43023C035D076BECC683C71A78CC6E438209FB26;
IL2CPP_EXTERN_C String_t* _stringLiteral493FE7F94FDC85045F0BE8971C31BED9290C8526;
IL2CPP_EXTERN_C String_t* _stringLiteral50208D50C670DDA05B8EDF7259934D70AD2A17B4;
IL2CPP_EXTERN_C String_t* _stringLiteral5B7BDCD055E8976EC2783C6D6E53B0E590E60488;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral6407F78FF6FC02B02B078DDE03272E67FF8D1824;
IL2CPP_EXTERN_C String_t* _stringLiteral965AC3461A475C0AD24FCBAAB874EC220A873703;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF9C9C23F7100943694DB45B8871B0A811B35C8;
IL2CPP_EXTERN_C String_t* _stringLiteral9E18A432BCD116096E8D0F03E0E8A8A2AE263F2A;
IL2CPP_EXTERN_C String_t* _stringLiteral9E1CADA76DBB148E93E15A81E44914373621278C;
IL2CPP_EXTERN_C String_t* _stringLiteralA9BABDD3FD6D56D8D9EF9D84DCECF78EC13522B7;
IL2CPP_EXTERN_C String_t* _stringLiteralAA55D7D90A61A79E4DC59B29EAD345F208DE1E20;
IL2CPP_EXTERN_C String_t* _stringLiteralAED2FF7635BF6E5A981B193252E733A74E9F82A9;
IL2CPP_EXTERN_C String_t* _stringLiteralBBBF549D0FA6EF293724A95ADA890AE4CABDC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteralCCFFF9B2A3BCF29E6CC02A03E2DD7754F02EB1E5;
IL2CPP_EXTERN_C String_t* _stringLiteralD3719DC7FB393EC6A0A18F97B5ACA5A75ED8480B;
IL2CPP_EXTERN_C String_t* _stringLiteralDC915477274D5051B6D25B57482BCBE932383C12;
IL2CPP_EXTERN_C String_t* _stringLiteralE33820DF1B09A427B46419490D10ED57F16E1C1E;
IL2CPP_EXTERN_C String_t* _stringLiteralE54D77B1762936EA26FB725B12CD0658F922B2B5;
IL2CPP_EXTERN_C String_t* _stringLiteralE9809321E40AD6453315C75BD53DBD5843F1014D;
IL2CPP_EXTERN_C String_t* _stringLiteralEA06AECCB04AB8AD54A9052FE35A4E17436C9EF0;
IL2CPP_EXTERN_C String_t* _stringLiteralEBFC04345F5C1A5B3A25AF8435C3BE62C7C1C327;
IL2CPP_EXTERN_C String_t* _stringLiteralFA3D3C96BDAD6A74C31E8DE53FC1EEE65FCA5F9C;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_m261B3A5A4DAE6C5E6A7689716AA5871C63B92F24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mC02525F212FBAB52EA4209DB8C6FD548825C81D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mDAB4705723E98C6792AE2864689F9C8182851FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_m62F935FB313C574220B837413E1E706B459EE5D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FusionVoiceClient_DeserializeFusionNetworkId_mEE358D5EB3AB3F64907D3BFAD26D0CE5BA2517E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FusionVoiceClient_OnVoiceClientStateChanged_m3898729CF1DF884F0375B31C0588A074D5D371C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FusionVoiceClient_ReadCompressedUInt64_mF25CF9FA9AC9D3DBD3D813CF1D93E7ED4FBCD9AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FusionVoiceClient_SerializeFusionNetworkId_m8017F18168B4EA8AF9D7E0F16C8DE2112DE6A5D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkRunner_TryGetNetworkedBehaviourFromNetworkedObjectRef_TisVoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A_m8ADCE08CAE82FD433C2145A4BDCEE1E8697FB184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D;
struct SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1C1898453A5566AECE1D9CBD002B754EA2961F9F 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<Fusion.SessionInfo>
struct List_1_t1401F7FA1DF1659F914B5A8D1A6B07E195A110AA  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SessionInfoU5BU5D_t133FBAE4F22F8C20FF05757BDBD5CCA1937359B9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Fusion.Photon.Realtime.AppSettings
struct AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84  : public RuntimeObject
{
	// System.String Fusion.Photon.Realtime.AppSettings::AppIdRealtime
	String_t* ___AppIdRealtime_0;
	// System.String Fusion.Photon.Realtime.AppSettings::AppIdFusion
	String_t* ___AppIdFusion_1;
	// System.String Fusion.Photon.Realtime.AppSettings::AppIdChat
	String_t* ___AppIdChat_2;
	// System.String Fusion.Photon.Realtime.AppSettings::AppIdVoice
	String_t* ___AppIdVoice_3;
	// System.String Fusion.Photon.Realtime.AppSettings::AppVersion
	String_t* ___AppVersion_4;
	// System.Boolean Fusion.Photon.Realtime.AppSettings::UseNameServer
	bool ___UseNameServer_5;
	// System.String Fusion.Photon.Realtime.AppSettings::FixedRegion
	String_t* ___FixedRegion_6;
	// System.String Fusion.Photon.Realtime.AppSettings::BestRegionSummaryFromStorage
	String_t* ___BestRegionSummaryFromStorage_7;
	// System.String Fusion.Photon.Realtime.AppSettings::Server
	String_t* ___Server_8;
	// System.Int32 Fusion.Photon.Realtime.AppSettings::Port
	int32_t ___Port_9;
	// System.String Fusion.Photon.Realtime.AppSettings::ProxyServer
	String_t* ___ProxyServer_10;
	// ExitGames.Client.Photon.ConnectionProtocol Fusion.Photon.Realtime.AppSettings::Protocol
	uint8_t ___Protocol_11;
	// System.Boolean Fusion.Photon.Realtime.AppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_12;
	// Fusion.Photon.Realtime.AuthModeOption Fusion.Photon.Realtime.AppSettings::AuthMode
	int32_t ___AuthMode_13;
	// System.Boolean Fusion.Photon.Realtime.AppSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_14;
	// ExitGames.Client.Photon.DebugLevel Fusion.Photon.Realtime.AppSettings::NetworkLogging
	uint8_t ___NetworkLogging_15;
};

// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7  : public RuntimeObject
{
	// System.String Photon.Realtime.AppSettings::AppIdRealtime
	String_t* ___AppIdRealtime_0;
	// System.String Photon.Realtime.AppSettings::AppIdFusion
	String_t* ___AppIdFusion_1;
	// System.String Photon.Realtime.AppSettings::AppIdChat
	String_t* ___AppIdChat_2;
	// System.String Photon.Realtime.AppSettings::AppIdVoice
	String_t* ___AppIdVoice_3;
	// System.String Photon.Realtime.AppSettings::AppVersion
	String_t* ___AppVersion_4;
	// System.Boolean Photon.Realtime.AppSettings::UseNameServer
	bool ___UseNameServer_5;
	// System.String Photon.Realtime.AppSettings::FixedRegion
	String_t* ___FixedRegion_6;
	// System.String Photon.Realtime.AppSettings::BestRegionSummaryFromStorage
	String_t* ___BestRegionSummaryFromStorage_7;
	// System.String Photon.Realtime.AppSettings::Server
	String_t* ___Server_8;
	// System.Int32 Photon.Realtime.AppSettings::Port
	int32_t ___Port_9;
	// System.String Photon.Realtime.AppSettings::ProxyServer
	String_t* ___ProxyServer_10;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Realtime.AppSettings::Protocol
	uint8_t ___Protocol_11;
	// System.Boolean Photon.Realtime.AppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_12;
	// Photon.Realtime.AuthModeOption Photon.Realtime.AppSettings::AuthMode
	int32_t ___AuthMode_13;
	// System.Boolean Photon.Realtime.AppSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_14;
	// ExitGames.Client.Photon.DebugLevel Photon.Realtime.AppSettings::NetworkLogging
	uint8_t ___NetworkLogging_15;
};

// Fusion.Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982  : public RuntimeObject
{
	// Fusion.Photon.Realtime.CustomAuthenticationType Fusion.Photon.Realtime.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Fusion.Photon.Realtime.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Fusion.Photon.Realtime.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject* ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Fusion.Photon.Realtime.AuthenticationValues::<Token>k__BackingField
	RuntimeObject* ___U3CTokenU3Ek__BackingField_3;
	// System.String Fusion.Photon.Realtime.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
};

// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7  : public RuntimeObject
{
	// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Realtime.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Realtime.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject* ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Photon.Realtime.AuthenticationValues::<Token>k__BackingField
	RuntimeObject* ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Realtime.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
};

// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9  : public RuntimeObject
{
	// System.String Photon.Realtime.EnterRoomParams::RoomName
	String_t* ___RoomName_0;
	// Photon.Realtime.RoomOptions Photon.Realtime.EnterRoomParams::RoomOptions
	RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* ___RoomOptions_1;
	// Photon.Realtime.TypedLobby Photon.Realtime.EnterRoomParams::Lobby
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___Lobby_2;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.EnterRoomParams::PlayerProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___PlayerProperties_3;
	// System.Boolean Photon.Realtime.EnterRoomParams::OnGameServer
	bool ___OnGameServer_4;
	// Photon.Realtime.JoinMode Photon.Realtime.EnterRoomParams::JoinMode
	uint8_t ___JoinMode_5;
	// System.String[] Photon.Realtime.EnterRoomParams::ExpectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ExpectedUsers_6;
};

// Fusion.HostMigrationToken
struct HostMigrationToken_t6249F7ADB7BFF0D8D26E524E085F3912BAA2952D  : public RuntimeObject
{
	// Fusion.GameMode Fusion.HostMigrationToken::<GameMode>k__BackingField
	int32_t ___U3CGameModeU3Ek__BackingField_0;
	// Fusion.Protocol.Snapshot Fusion.HostMigrationToken::<HostSnapshot>k__BackingField
	Snapshot_t6214C0BF071F5B4CB06F00CBA15A2299FCFD0147* ___U3CHostSnapshotU3Ek__BackingField_1;
	// Fusion.CloudCommunicator Fusion.HostMigrationToken::<CloudCommunicator>k__BackingField
	CloudCommunicator_tCE73B6724974FAEA9AC2576C14A7C2EE8951DDA6* ___U3CCloudCommunicatorU3Ek__BackingField_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Photon.Realtime.RoomInfo
struct RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;
};

// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_12;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_13;
};

// Fusion.SessionInfo
struct SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB  : public RuntimeObject
{
	// System.String Fusion.SessionInfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.String Fusion.SessionInfo::<Region>k__BackingField
	String_t* ___U3CRegionU3Ek__BackingField_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Fusion.SessionProperty> Fusion.SessionInfo::<Properties>k__BackingField
	ReadOnlyDictionary_2_tF107A4E266D96B1C819AC88DCD8B01E10FE1407B* ___U3CPropertiesU3Ek__BackingField_2;
	// System.Int32 Fusion.SessionInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_3;
	// System.Int32 Fusion.SessionInfo::<MaxPlayers>k__BackingField
	int32_t ___U3CMaxPlayersU3Ek__BackingField_4;
	// System.Boolean Fusion.SessionInfo::_isValid
	bool ____isValid_5;
	// System.Boolean Fusion.SessionInfo::_isOpen
	bool ____isOpen_6;
	// System.Boolean Fusion.SessionInfo::_isVisible
	bool ____isVisible_7;
	// Fusion.NetworkRunner Fusion.SessionInfo::_runner
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ____runner_8;
};

// ExitGames.Client.Photon.StreamBuffer
struct StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::pos
	int32_t ___pos_1;
	// System.Int32 ExitGames.Client.Photon.StreamBuffer::len
	int32_t ___len_2;
	// System.Byte[] ExitGames.Client.Photon.StreamBuffer::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Photon.Voice.Unity.VoiceComponentImpl
struct VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90  : public RuntimeObject
{
	// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceComponentImpl::voiceLogger
	VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* ___voiceLogger_0;
	// Photon.Voice.Unity.VoiceComponentImpl/LoggerImpl Photon.Voice.Unity.VoiceComponentImpl::logger
	LoggerImpl_t2B330C78FD8F62B3C3EFEE700F502A7CCF31EAA6* ___logger_1;
};

// Photon.Voice.Unity.VoiceComponentImpl/LoggerImpl
struct LoggerImpl_t2B330C78FD8F62B3C3EFEE700F502A7CCF31EAA6  : public RuntimeObject
{
	// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceComponentImpl/LoggerImpl::voiceLogger
	VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* ___voiceLogger_0;
	// UnityEngine.Object Photon.Voice.Unity.VoiceComponentImpl/LoggerImpl::obj
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj_1;
	// System.String Photon.Voice.Unity.VoiceComponentImpl/LoggerImpl::objName
	String_t* ___objName_2;
	// System.String Photon.Voice.Unity.VoiceComponentImpl/LoggerImpl::tag
	String_t* ___tag_3;
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// Fusion.Changed`1<Photon.Voice.Fusion.VoiceNetworkObject>
struct Changed_1_t15F1762CD7C10AE9C17894E6A2D040696945484D 
{
	// System.Int32* Fusion.Changed`1::_old
	int32_t* ____old_0;
	// System.Int32* Fusion.Changed`1::_new
	int32_t* ____new_1;
	// System.Boolean Fusion.Changed`1::_rescan
	bool ____rescan_2;
	// T Fusion.Changed`1::_behaviour
	VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* ____behaviour_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint8_t ___value_1;
};

// NanoSockets.Address
struct Address_t0C64043894DC43092287210A04CAD369B08FDBF3 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.UInt64 NanoSockets.Address::_address0
					uint64_t ____address0_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ____address0_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ____address1_1_OffsetPadding[8];
					// System.UInt64 NanoSockets.Address::_address1
					uint64_t ____address1_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ____address1_1_OffsetPadding_forAlignmentOnly[8];
					uint64_t ____address1_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Port_2_OffsetPadding[16];
					// System.UInt16 NanoSockets.Address::Port
					uint16_t ___Port_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Port_2_OffsetPadding_forAlignmentOnly[16];
					uint16_t ___Port_2_forAlignmentOnly;
				};
			};
		};
		uint8_t Address_t0C64043894DC43092287210A04CAD369B08FDBF3__padding[24];
	};
};

// Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 
{
	// Photon.Voice.IOS.AudioSessionCategory Photon.Voice.IOS.AudioSessionParameters::Category
	int32_t ___Category_0;
	// Photon.Voice.IOS.AudioSessionMode Photon.Voice.IOS.AudioSessionParameters::Mode
	int32_t ___Mode_1;
	// Photon.Voice.IOS.AudioSessionCategoryOption[] Photon.Voice.IOS.AudioSessionParameters::CategoryOptions
	AudioSessionCategoryOptionU5BU5D_tDE452C63A96D619A3AE7D328A5E074AA02BC9867* ___CategoryOptions_2;
};
// Native definition for P/Invoke marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_pinvoke
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};
// Native definition for COM marshalling of Photon.Voice.IOS.AudioSessionParameters
struct AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37_marshaled_com
{
	int32_t ___Category_0;
	int32_t ___Mode_1;
	int32_t* ___CategoryOptions_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 
{
	// System.Boolean Photon.Voice.DeviceInfo::<IsDefault>k__BackingField
	bool ___U3CIsDefaultU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.DeviceInfo::<IDInt>k__BackingField
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	// System.String Photon.Voice.DeviceInfo::<IDString>k__BackingField
	String_t* ___U3CIDStringU3Ek__BackingField_2;
	// System.String Photon.Voice.DeviceInfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
	// Photon.Voice.DeviceFeatures Photon.Voice.DeviceInfo::features
	DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03* ___features_4;
	// System.Boolean Photon.Voice.DeviceInfo::useStringID
	bool ___useStringID_5;
};
// Native definition for P/Invoke marshalling of Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_pinvoke
{
	int32_t ___U3CIsDefaultU3Ek__BackingField_0;
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	char* ___U3CIDStringU3Ek__BackingField_2;
	char* ___U3CNameU3Ek__BackingField_3;
	DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03* ___features_4;
	int32_t ___useStringID_5;
};
// Native definition for COM marshalling of Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_marshaled_com
{
	int32_t ___U3CIsDefaultU3Ek__BackingField_0;
	int32_t ___U3CIDIntU3Ek__BackingField_1;
	Il2CppChar* ___U3CIDStringU3Ek__BackingField_2;
	Il2CppChar* ___U3CNameU3Ek__BackingField_3;
	DeviceFeatures_t05B3C3BD6FF064A0B655BA147B59195A5DBC3D03* ___features_4;
	int32_t ___useStringID_5;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Fusion.NetworkId
struct NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Fusion.NetworkId::Raw
			uint32_t ___Raw_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___Raw_4_forAlignmentOnly;
		};
	};
};

// Fusion.NetworkInput
struct NetworkInput_t8FB09045785B1BAE178F157ACE2B24EEC7E31231 
{
	// System.Int32* Fusion.NetworkInput::_ptr
	int32_t* ____ptr_0;
	// System.Int32 Fusion.NetworkInput::_wordCount
	int32_t ____wordCount_1;
};

// Fusion.NetworkObjectPredictionKey
struct NetworkObjectPredictionKey_tBF0A538EE9240A4AB5D149BC21F8B174181D8E9A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Fusion.NetworkObjectPredictionKey::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Fusion.NetworkObjectPredictionKey::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Fusion.NetworkObjectPredictionKey::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Fusion.NetworkObjectPredictionKey::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.NetworkObjectPredictionKey::AsInt
			int32_t ___AsInt_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___AsInt_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Fusion.NetworkObjectPredictionKey::AsFloat
			float ___AsFloat_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___AsFloat_5_forAlignmentOnly;
		};
	};
};

// Fusion.NetworkPrefabId
struct NetworkPrefabId_tD353189021ABA05E620EE2F0BE67171A8C6F7AC9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Fusion.NetworkPrefabId::Value
			uint32_t ___Value_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___Value_2_forAlignmentOnly;
		};
	};
};

// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A 
{
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;
};

// Fusion.PlayerRef
struct PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.PlayerRef::_index
			int32_t ____index_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____index_1_forAlignmentOnly;
		};
	};
};

// Fusion.ReadAccuracy
struct ReadAccuracy_tAB2B6530E294025CF190D052F8B35FAC62C753B5 
{
	// System.Single Fusion.ReadAccuracy::Value
	float ___Value_0;
};

// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373  : public RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;
	// System.Boolean Photon.Realtime.Room::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_17;
	// System.Boolean Photon.Realtime.Room::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_18;
	// System.Boolean Photon.Realtime.Room::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_19;
	// System.Boolean Photon.Realtime.Room::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_20;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// Fusion.SceneRef
struct SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.SceneRef::_index
			int32_t ____index_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____index_1_forAlignmentOnly;
		};
	};
};

// Fusion.SimulationMessagePtr
struct SimulationMessagePtr_tADE4FF081CDDA852A76EA6701476D3167449C8FB 
{
	// Fusion.SimulationMessage* Fusion.SimulationMessagePtr::Message
	SimulationMessage_t741F8FBD24BEECD63F62791520B0C4EB9C1D101C* ___Message_0;
};

// Fusion.Tick
struct Tick_t57D39A4600C22C5C14D12A0C565FEB34404FD02F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Fusion.Tick::Raw
			int32_t ___Raw_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Raw_2_forAlignmentOnly;
		};
	};
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Fusion.WriteAccuracy
struct WriteAccuracy_tC6AAEB23A6F50AD278A1D892364F7C0E427241AF 
{
	// System.Single Fusion.WriteAccuracy::Value
	float ___Value_0;
};

// Photon.Voice.AudioOutDelayControl/PlayDelayConfig
struct PlayDelayConfig_t7E2F00F08A8F2A3D47AFDD64347913B6409871E2 
{
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Low
	int32_t ___Low_1;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::High
	int32_t ___High_2;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Max
	int32_t ___Max_3;
	// System.Int32 Photon.Voice.AudioOutDelayControl/PlayDelayConfig::SpeedUpPerc
	int32_t ___SpeedUpPerc_4;
};

// Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer
struct U3CRawGuidValueU3Ee__FixedBuffer_t048BC06BF094CC07E5C83A903FE344CCF482DD2F 
{
	union
	{
		struct
		{
			// System.Int64 Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer::FixedElementField
			int64_t ___FixedElementField_0;
		};
		uint8_t U3CRawGuidValueU3Ee__FixedBuffer_t048BC06BF094CC07E5C83A903FE344CCF482DD2F__padding[16];
	};
};

// Fusion.NetworkRunner/DeferredShutdownParams
struct DeferredShutdownParams_t3F598A811D32AD9AE4A814809263F7035376B9AF 
{
	// System.Boolean Fusion.NetworkRunner/DeferredShutdownParams::ShutdownRequested
	bool ___ShutdownRequested_0;
	// Fusion.ShutdownReason Fusion.NetworkRunner/DeferredShutdownParams::ShutdownReason
	int32_t ___ShutdownReason_1;
	// System.Boolean Fusion.NetworkRunner/DeferredShutdownParams::DestroyGO
	bool ___DestroyGO_2;
};
// Native definition for P/Invoke marshalling of Fusion.NetworkRunner/DeferredShutdownParams
struct DeferredShutdownParams_t3F598A811D32AD9AE4A814809263F7035376B9AF_marshaled_pinvoke
{
	int32_t ___ShutdownRequested_0;
	int32_t ___ShutdownReason_1;
	int32_t ___DestroyGO_2;
};
// Native definition for COM marshalling of Fusion.NetworkRunner/DeferredShutdownParams
struct DeferredShutdownParams_t3F598A811D32AD9AE4A814809263F7035376B9AF_marshaled_com
{
	int32_t ___ShutdownRequested_0;
	int32_t ___ShutdownReason_1;
	int32_t ___DestroyGO_2;
};

// Fusion.NetworkRunner/HostSnapshotCompressionJob
struct HostSnapshotCompressionJob_tF5EE776934ACB6499EF7BCC85793FDA2FB03431A 
{
	// System.Int32 Fusion.NetworkRunner/HostSnapshotCompressionJob::CurrentTick
	int32_t ___CurrentTick_0;
	// System.Int32 Fusion.NetworkRunner/HostSnapshotCompressionJob::Length
	int32_t ___Length_1;
	// System.UInt32 Fusion.NetworkRunner/HostSnapshotCompressionJob::LastID
	uint32_t ___LastID_2;
	// System.Int32* Fusion.NetworkRunner/HostSnapshotCompressionJob::Previous
	int32_t* ___Previous_3;
	// System.Int32* Fusion.NetworkRunner/HostSnapshotCompressionJob::Current
	int32_t* ___Current_4;
	// System.Int32* Fusion.NetworkRunner/HostSnapshotCompressionJob::Result
	int32_t* ___Result_5;
};

// Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings
struct NativeAndroidMicrophoneSettings_t419E0F59F210A8DA5DC2A057BFB1DC8803537D0B 
{
	// System.Boolean Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings::AcousticEchoCancellation
	bool ___AcousticEchoCancellation_0;
	// System.Boolean Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings::AutomaticGainControl
	bool ___AutomaticGainControl_1;
	// System.Boolean Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings::NoiseSuppression
	bool ___NoiseSuppression_2;
};
// Native definition for P/Invoke marshalling of Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings
struct NativeAndroidMicrophoneSettings_t419E0F59F210A8DA5DC2A057BFB1DC8803537D0B_marshaled_pinvoke
{
	int32_t ___AcousticEchoCancellation_0;
	int32_t ___AutomaticGainControl_1;
	int32_t ___NoiseSuppression_2;
};
// Native definition for COM marshalling of Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings
struct NativeAndroidMicrophoneSettings_t419E0F59F210A8DA5DC2A057BFB1DC8803537D0B_marshaled_com
{
	int32_t ___AcousticEchoCancellation_0;
	int32_t ___AutomaticGainControl_1;
	int32_t ___NoiseSuppression_2;
};

// System.Nullable`1<Fusion.SceneRef>
struct Nullable_1_t60B9431C1BCAA220BB2AA6938CBB4CD1F9CFE0F1 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	SceneRef_tE5791BED46D94AF338C6D8BD3DC57DA52B6BF6C9 ___value_1;
};

// System.Nullable`1<Fusion.NetworkRunner/HostSnapshotCompressionJob>
struct Nullable_1_tC45089A0BD074FF0A859152F3B8175B86B2FCB29 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	HostSnapshotCompressionJob_tF5EE776934ACB6499EF7BCC85793FDA2FB03431A ___value_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
};

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4  : public RuntimeObject
{
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.ClientAppType Photon.Realtime.LoadBalancingClient::<ClientType>k__BackingField
	int32_t ___U3CClientTypeU3Ek__BackingField_3;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___U3CAuthValuesU3Ek__BackingField_4;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_5;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_6;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E ___U3CExpectedProtocolU3Ek__BackingField_7;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject* ___tokenCache_8;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___ServerPortOverrides_13;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_15;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_16;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_17;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_18;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_19;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___StateChanged_20;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295* ___EventReceived_21;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826* ___OpResponseReceived_22;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD* ___ConnectionCallbackTargets_23;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97* ___MatchMakingCallbackTargets_24;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488* ___InRoomCallbackTargets_25;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC* ___LobbyCallbackTargets_26;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851* ___WebRpcCallbackTargets_27;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7* ___ErrorInfoCallbackTargets_28;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_29;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___U3CCurrentLobbyU3Ek__BackingField_30;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_31;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics_32;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CLocalPlayerU3Ek__BackingField_33;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CCurrentRoomU3Ek__BackingField_34;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_36;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_37;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_38;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___enterRoomParamsCache_39;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___failedRoomEntryOperation_40;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___friendListRequested_42;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_43;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_44;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___RegionHandler_45;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_46;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_47;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_48;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02* ___callbackTargetChanges_49;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___callbackTargets_50;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_51;
};

// Fusion.Sockets.NetAddress
struct NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// NanoSockets.Address Fusion.Sockets.NetAddress::NativeAddress
			Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___NativeAddress_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			Address_t0C64043894DC43092287210A04CAD369B08FDBF3 ___NativeAddress_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Fusion.Sockets.NetAddress::Block0
			uint64_t ___Block0_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Block0_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Block1_2_OffsetPadding[8];
			// System.UInt64 Fusion.Sockets.NetAddress::Block1
			uint64_t ___Block1_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Block1_2_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___Block1_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Block2_3_OffsetPadding[16];
			// System.UInt64 Fusion.Sockets.NetAddress::Block2
			uint64_t ___Block2_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Block2_3_OffsetPadding_forAlignmentOnly[16];
			uint64_t ___Block2_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____actorId_4_OffsetPadding[20];
			// System.Int32 Fusion.Sockets.NetAddress::_actorId
			int32_t ____actorId_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____actorId_4_OffsetPadding_forAlignmentOnly[20];
			int32_t ____actorId_4_forAlignmentOnly;
		};
	};
};

// Fusion.NetworkObjectGuid
struct NetworkObjectGuid_t99EAC957EE861D66626645313D35A1F49AF134B4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer Fusion.NetworkObjectGuid::RawGuidValue
			U3CRawGuidValueU3Ee__FixedBuffer_t048BC06BF094CC07E5C83A903FE344CCF482DD2F ___RawGuidValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			U3CRawGuidValueU3Ee__FixedBuffer_t048BC06BF094CC07E5C83A903FE344CCF482DD2F ___RawGuidValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Fusion.NetworkObjectGuid::_data0
			int64_t ____data0_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ____data0_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____data1_4_OffsetPadding[8];
			// System.Int64 Fusion.NetworkObjectGuid::_data1
			int64_t ____data1_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____data1_4_OffsetPadding_forAlignmentOnly[8];
			int64_t ____data1_4_forAlignmentOnly;
		};
	};
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Fusion.NetworkObject/PredictionData
struct PredictionData_tAB7F59FFE9B92C0D64188C2D2BB591CC45173403 
{
	// Fusion.Tick Fusion.NetworkObject/PredictionData::Tick
	Tick_t57D39A4600C22C5C14D12A0C565FEB34404FD02F ___Tick_0;
	// Fusion.NetworkPrefabId Fusion.NetworkObject/PredictionData::Prefab
	NetworkPrefabId_tD353189021ABA05E620EE2F0BE67171A8C6F7AC9 ___Prefab_1;
	// Fusion.NetworkObjectPredictionKey Fusion.NetworkObject/PredictionData::Key
	NetworkObjectPredictionKey_tBF0A538EE9240A4AB5D149BC21F8B174181D8E9A ___Key_2;
};

// System.Nullable`1<Unity.Jobs.JobHandle>
struct Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___value_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// Photon.Voice.LoadBalancingTransport
struct LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80  : public LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4
{
	// Photon.Voice.VoiceClient Photon.Voice.LoadBalancingTransport::voiceClient
	VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* ___voiceClient_53;
	// Photon.Voice.PhotonTransportProtocol Photon.Voice.LoadBalancingTransport::protocol
	PhotonTransportProtocol_tDBD08C0E3F1F28676B0573F86D9BC19564FCA700* ___protocol_54;
	// System.Array Photon.Voice.LoadBalancingTransport::codecEnumValues
	RuntimeArray* ___codecEnumValues_55;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Fusion.NetworkRunnerCallbackArgs/ConnectRequest
struct ConnectRequest_t0B36E883FB21681399384CF1BA965DC577148B66  : public RuntimeObject
{
	// Fusion.Sockets.NetAddress Fusion.NetworkRunnerCallbackArgs/ConnectRequest::<RemoteAddress>k__BackingField
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___U3CRemoteAddressU3Ek__BackingField_0;
	// System.Nullable`1<System.Boolean> Fusion.NetworkRunnerCallbackArgs/ConnectRequest::Accepted
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___Accepted_1;
};

// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_tC0EA7F2D58AD1B0A85B30C169AAEBD600889E448  : public MulticastDelegate_t
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Fusion.Photon.Realtime.PhotonAppSettings
struct PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Fusion.Photon.Realtime.AppSettings Fusion.Photon.Realtime.PhotonAppSettings::AppSettings
	AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* ___AppSettings_4;
};

// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_tE9A207ADBB74A63C939A741C47F75676E0A82BEF  : public MulticastDelegate_t
{
};

// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Fusion.Behaviour
struct Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CClientU3Ek__BackingField_4;
	// System.Boolean Photon.Realtime.ConnectionHandler::DisconnectAfterKeepAlive
	bool ___DisconnectAfterKeepAlive_5;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_7;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_8;
	// System.Byte Photon.Realtime.ConnectionHandler::fallbackThreadId
	uint8_t ___fallbackThreadId_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_11;
	// System.Diagnostics.Stopwatch Photon.Realtime.ConnectionHandler::backgroundStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___backgroundStopwatch_12;
};

// Photon.Voice.Unity.VoiceComponent
struct VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Voice.Unity.VoiceComponentImpl Photon.Voice.Unity.VoiceComponent::impl
	VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* ___impl_4;
};

// Photon.Voice.Unity.VoiceLogger
struct VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ExitGames.Client.Photon.DebugLevel Photon.Voice.Unity.VoiceLogger::LogLevel
	uint8_t ___LogLevel_4;
};

// Fusion.NetworkObject
struct NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// System.Int32* Fusion.NetworkObject::Ptr
	int32_t* ___Ptr_5;
	// System.Int32* Fusion.NetworkObject::Changed
	int32_t* ___Changed_6;
	// Fusion.FastReferenceList`1<Fusion.NetworkBehaviour> Fusion.NetworkObject::CallbackBehaviours
	FastReferenceList_1_t2DC9499F4E148A6E8794A7A5E3F1A83D98AA0D76* ___CallbackBehaviours_7;
	// Fusion.NetworkId Fusion.NetworkObject::Id
	NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 ___Id_8;
	// System.Boolean Fusion.NetworkObject::IsResume
	bool ___IsResume_9;
	// Fusion.NetworkRunner Fusion.NetworkObject::Runner
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___Runner_10;
	// Fusion.NetworkObject/ObjectInterestModes Fusion.NetworkObject::ObjectInterest
	int32_t ___ObjectInterest_11;
	// System.String[] Fusion.NetworkObject::DefaultInterestGroups
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___DefaultInterestGroups_12;
	// System.Boolean Fusion.NetworkObject::DestroyWhenStateAuthorityLeaves
	bool ___DestroyWhenStateAuthorityLeaves_13;
	// System.Boolean Fusion.NetworkObject::AllowStateAuthorityOverride
	bool ___AllowStateAuthorityOverride_14;
	// Fusion.NetworkAreaOfInterestBehaviour Fusion.NetworkObject::AoiPositionSource
	NetworkAreaOfInterestBehaviour_tD2D502D3E647D9E5E4D8A0E3D22DC9F0B674AACD* ___AoiPositionSource_15;
	// Fusion.Tick Fusion.NetworkObject::<LastReceiveTick>k__BackingField
	Tick_t57D39A4600C22C5C14D12A0C565FEB34404FD02F ___U3CLastReceiveTickU3Ek__BackingField_16;
	// Fusion.NetworkObjectFlags Fusion.NetworkObject::Flags
	int32_t ___Flags_17;
	// Fusion.NetworkObjectGuid Fusion.NetworkObject::NetworkGuid
	NetworkObjectGuid_t99EAC957EE861D66626645313D35A1F49AF134B4 ___NetworkGuid_18;
	// Fusion.NetworkObject/PredictionData Fusion.NetworkObject::PredictedSpawn
	PredictionData_tAB7F59FFE9B92C0D64188C2D2BB591CC45173403 ___PredictedSpawn_19;
	// Fusion.NetworkObject[] Fusion.NetworkObject::NestedObjects
	NetworkObjectU5BU5D_tB73C7914AB3A2AB2BCE11B2D5AFDEAE2A48F2D0D* ___NestedObjects_20;
	// Fusion.NetworkBehaviour[] Fusion.NetworkObject::NetworkedBehaviours
	NetworkBehaviourU5BU5D_t60B9B079110E3B7AAB961DDA3B483DB8CDD56F6F* ___NetworkedBehaviours_21;
	// Fusion.SimulationBehaviour[] Fusion.NetworkObject::SimulationBehaviours
	SimulationBehaviourU5BU5D_t31031271E2F0F613B675EBEF61151021139E1C4E* ___SimulationBehaviours_22;
	// System.Boolean Fusion.NetworkObject::InSimulation
	bool ___InSimulation_23;
};

// Fusion.NetworkRunner
struct NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// Fusion.NetworkRunner/DeferredShutdownParams Fusion.NetworkRunner::_deferredShutdownParams
	DeferredShutdownParams_t3F598A811D32AD9AE4A814809263F7035376B9AF ____deferredShutdownParams_5;
	// Fusion.Simulation Fusion.NetworkRunner::_simulation
	Simulation_t1D52B02F9D931E87FAEB15A3EE8B13ED014DB584* ____simulation_7;
	// Fusion.NetworkRunner/SimulationPhase Fusion.NetworkRunner::_simulationPhase
	int32_t ____simulationPhase_8;
	// Fusion.NetworkRunner/ShutdownFlags Fusion.NetworkRunner::_simulationShutdown
	int32_t ____simulationShutdown_9;
	// Fusion.NetworkObjectRefMap`1<Fusion.NetworkObject> Fusion.NetworkRunner::_objects
	NetworkObjectRefMap_1_t09E8E07F1985CA0C12E271256B24BBFF00DB90F6* ____objects_10;
	// Fusion.SimulationBehaviourUpdater Fusion.NetworkRunner::_behaviourUpdater
	SimulationBehaviourUpdater_t1D2813CD5F3514AE8854F58396E79C2053157565* ____behaviourUpdater_11;
	// System.Collections.Generic.List`1<Fusion.INetworkRunnerCallbacks> Fusion.NetworkRunner::_callbacks
	List_1_tA8148AA407AA53B8F5D3BFB8B1AE9D9C941E8545* ____callbacks_12;
	// Fusion.Allocator* Fusion.NetworkRunner::_changedAllocator
	Allocator_t4184B6C7C53A6059F1EBA19A30D551CDECA2F69C* ____changedAllocator_13;
	// System.Collections.Generic.List`1<Fusion.NetworkId> Fusion.NetworkRunner::_destroyIdsBuffer
	List_1_t8673857563BA6C5F285B36C12CE318D403D7CE03* ____destroyIdsBuffer_14;
	// System.Collections.Generic.LinkedList`1<Fusion.RunnerVisibilityNode> Fusion.NetworkRunner::_visibilityNodes
	LinkedList_1_t3813413FE4ECB2279D0C7AC05BD288865A34356B* ____visibilityNodes_15;
	// System.Boolean Fusion.NetworkRunner::_isVisible
	bool ____isVisible_16;
	// System.Collections.Generic.Queue`1<Fusion.NetworkRunner/SpawnQueueEntry> Fusion.NetworkRunner::_spawnQueue
	Queue_1_t15EDAB8C3525B4DF694D0B2011D38D47CDCABD5D* ____spawnQueue_17;
	// System.Boolean Fusion.NetworkRunner::_printedInterestGroupsWarning
	bool ____printedInterestGroupsWarning_18;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> Fusion.NetworkRunner::_initializeOperation
	TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* ____initializeOperation_19;
	// Fusion.NetworkProjectConfig Fusion.NetworkRunner::_config
	NetworkProjectConfig_t0D1807A7DE80BB18A606CEF45A35BFA1C29D8BBF* ____config_20;
	// System.Int32 Fusion.NetworkRunner::_ticksExecuted
	int32_t ____ticksExecuted_21;
	// Fusion.INetworkObjectPool Fusion.NetworkRunner::_networkObjectPool
	RuntimeObject* ____networkObjectPool_22;
	// System.UInt32 Fusion.NetworkRunner::_idCounter
	uint32_t ____idCounter_23;
	// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkRunner::_predictionSpawns
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ____predictionSpawns_24;
	// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkRunner::_predictionDespawns
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ____predictionDespawns_25;
	// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkRunner::_activeSceneObjectsBuffer
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ____activeSceneObjectsBuffer_26;
	// Fusion.ReadAccuracy Fusion.NetworkRunner::_positionReadAccuracy
	ReadAccuracy_tAB2B6530E294025CF190D052F8B35FAC62C753B5 ____positionReadAccuracy_27;
	// Fusion.WriteAccuracy Fusion.NetworkRunner::_positionWriteAccuracy
	WriteAccuracy_tC6AAEB23A6F50AD278A1D892364F7C0E427241AF ____positionWriteAccuracy_28;
	// Fusion.ReadAccuracy Fusion.NetworkRunner::_rotationReadAccuracy
	ReadAccuracy_tAB2B6530E294025CF190D052F8B35FAC62C753B5 ____rotationReadAccuracy_29;
	// Fusion.WriteAccuracy Fusion.NetworkRunner::_rotationWriteAccuracy
	WriteAccuracy_tC6AAEB23A6F50AD278A1D892364F7C0E427241AF ____rotationWriteAccuracy_30;
	// System.Byte[] Fusion.NetworkRunner::_connectionToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____connectionToken_31;
	// System.Nullable`1<System.Boolean> Fusion.NetworkRunner::_provideInput
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____provideInput_32;
	// System.Threading.CancellationTokenSource Fusion.NetworkRunner::OperationsCancellationTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___OperationsCancellationTokenSource_33;
	// System.Collections.Generic.List`1<Fusion.NetworkObject> Fusion.NetworkRunner::_remotePrefabsWaitingForSpawnedCallback
	List_1_t820A3120C714DD2EBB7BDED91BC44968C0A63F82* ____remotePrefabsWaitingForSpawnedCallback_34;
	// System.Boolean Fusion.NetworkRunner::<IsHostMigrationEnabled>k__BackingField
	bool ___U3CIsHostMigrationEnabledU3Ek__BackingField_35;
	// System.UInt32 Fusion.NetworkRunner::<HostMigrationSnapshotDelay>k__BackingField
	uint32_t ___U3CHostMigrationSnapshotDelayU3Ek__BackingField_36;
	// System.Byte* Fusion.NetworkRunner::_hostSnapshotData0
	uint8_t* ____hostSnapshotData0_37;
	// System.Byte* Fusion.NetworkRunner::_hostSnapshotData1
	uint8_t* ____hostSnapshotData1_38;
	// System.Byte* Fusion.NetworkRunner::_hostSnapshotDelta
	uint8_t* ____hostSnapshotDelta_39;
	// System.Threading.Tasks.TaskCompletionSource`1<System.ValueTuple`5<System.Boolean,System.Int32,System.Int32,System.UInt32,System.Byte[]>> Fusion.NetworkRunner::_buildHostSnapshotTask
	TaskCompletionSource_1_t9ED39B9FD79B771ECAD656817DB0F8370498BFAD* ____buildHostSnapshotTask_40;
	// System.Nullable`1<Fusion.NetworkRunner/HostSnapshotCompressionJob> Fusion.NetworkRunner::_buildHostSnapshotJob
	Nullable_1_tC45089A0BD074FF0A859152F3B8175B86B2FCB29 ____buildHostSnapshotJob_41;
	// System.Nullable`1<Unity.Jobs.JobHandle> Fusion.NetworkRunner::_buildHostSnapshotHandler
	Nullable_1_t2153F26F688901E0795BA65DEA582FDC46AB9489 ____buildHostSnapshotHandler_42;
	// Fusion.Protocol.HostMigration Fusion.NetworkRunner::_lastHostMigrationInfo
	HostMigration_t993547CB8CCEB0971E6050E36B4EFC675D156960* ____lastHostMigrationInfo_43;
	// System.Collections.Generic.Stack`1<Fusion.NetworkRunner/NetworkObjectInactivityGuard> Fusion.NetworkRunner::_inactivityGuardPool
	Stack_1_t0F5E34EE9211205B247AA0F814825DB9E5DD48B7* ____inactivityGuardPool_44;
	// Fusion.GameMode Fusion.NetworkRunner::<GameMode>k__BackingField
	int32_t ___U3CGameModeU3Ek__BackingField_48;
	// Fusion.SessionInfo Fusion.NetworkRunner::<SessionInfo>k__BackingField
	SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB* ___U3CSessionInfoU3Ek__BackingField_49;
	// Fusion.LobbyInfo Fusion.NetworkRunner::<LobbyInfo>k__BackingField
	LobbyInfo_t5F666E1575123FE4714F1B6067A8EAA55CFFA5CF* ___U3CLobbyInfoU3Ek__BackingField_50;
	// System.Threading.Tasks.TaskCompletionSource`1<System.ValueTuple`2<Fusion.ShutdownReason,System.String>> Fusion.NetworkRunner::_cloudOperation
	TaskCompletionSource_1_tB8CC3005937DC70B6B78A3B987DA84E5BDB3FED6* ____cloudOperation_51;
	// Fusion.CloudServices Fusion.NetworkRunner::_cloudServices
	CloudServices_tC404BACC0187CF1F40CF228DCEFA39DA7D4F270C* ____cloudServices_52;
	// Fusion.INetworkSceneManager Fusion.NetworkRunner::_sceneManager
	RuntimeObject* ____sceneManager_53;
	// Fusion.INetworkSceneManagerObjectResolver Fusion.NetworkRunner::_sceneObjectResolver
	RuntimeObject* ____sceneObjectResolver_54;
	// System.Collections.Generic.Dictionary`2<Fusion.NetworkObjectGuid,Fusion.NetworkObject> Fusion.NetworkRunner::_sceneObjectLoopkup
	Dictionary_2_t3BC581E5E3414F2C3884E7EA3F3D93105565B726* ____sceneObjectLoopkup_55;
	// System.Nullable`1<Fusion.SceneRef> Fusion.NetworkRunner::_sharedModeStartSceneRef
	Nullable_1_t60B9431C1BCAA220BB2AA6938CBB4CD1F9CFE0F1 ____sharedModeStartSceneRef_56;
	// UnityEngine.SceneManagement.Scene Fusion.NetworkRunner::_multiplePeerUnityScene
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ____multiplePeerUnityScene_57;
	// System.Boolean Fusion.NetworkRunner::_isMultiplePeerUnitySceneTemp
	bool ____isMultiplePeerUnitySceneTemp_58;
	// System.Int32* Fusion.NetworkRunner::_tempWords
	int32_t* ____tempWords_59;
	// System.Int32 Fusion.NetworkRunner::_tempWordsCapacity
	int32_t ____tempWordsCapacity_60;
};

// Photon.Voice.Unity.Recorder
struct Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// System.Boolean Photon.Voice.Unity.Recorder::voiceDetection
	bool ___voiceDetection_7;
	// System.Single Photon.Voice.Unity.Recorder::voiceDetectionThreshold
	float ___voiceDetectionThreshold_8;
	// System.Int32 Photon.Voice.Unity.Recorder::voiceDetectionDelayMs
	int32_t ___voiceDetectionDelayMs_9;
	// System.Object Photon.Voice.Unity.Recorder::userData
	RuntimeObject* ___userData_10;
	// Photon.Voice.LocalVoice Photon.Voice.Unity.Recorder::voice
	LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* ___voice_11;
	// Photon.Voice.IAudioDesc Photon.Voice.Unity.Recorder::inputSource
	RuntimeObject* ___inputSource_12;
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Unity.Recorder::voiceConnection
	VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* ___voiceConnection_13;
	// System.Byte Photon.Voice.Unity.Recorder::interestGroup
	uint8_t ___interestGroup_14;
	// System.Boolean Photon.Voice.Unity.Recorder::debugEchoMode
	bool ___debugEchoMode_15;
	// System.Boolean Photon.Voice.Unity.Recorder::reliableMode
	bool ___reliableMode_16;
	// System.Boolean Photon.Voice.Unity.Recorder::encrypt
	bool ___encrypt_17;
	// System.Boolean Photon.Voice.Unity.Recorder::transmitEnabled
	bool ___transmitEnabled_18;
	// POpusCodec.Enums.SamplingRate Photon.Voice.Unity.Recorder::samplingRate
	int32_t ___samplingRate_19;
	// Photon.Voice.OpusCodec/FrameDuration Photon.Voice.Unity.Recorder::frameDuration
	int32_t ___frameDuration_20;
	// System.Int32 Photon.Voice.Unity.Recorder::bitrate
	int32_t ___bitrate_21;
	// Photon.Voice.Unity.Recorder/InputSourceType Photon.Voice.Unity.Recorder::sourceType
	int32_t ___sourceType_22;
	// Photon.Voice.Unity.Recorder/MicType Photon.Voice.Unity.Recorder::microphoneType
	int32_t ___microphoneType_23;
	// UnityEngine.AudioClip Photon.Voice.Unity.Recorder::audioClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___audioClip_24;
	// System.Boolean Photon.Voice.Unity.Recorder::loopAudioClip
	bool ___loopAudioClip_25;
	// System.Boolean Photon.Voice.Unity.Recorder::recordingEnabled
	bool ___recordingEnabled_26;
	// System.Func`1<Photon.Voice.IAudioDesc> Photon.Voice.Unity.Recorder::inputFactory
	Func_1_t70BAAB9F1D00714988C7BA974AF43D14365CBD68* ___inputFactory_27;
	// Photon.Voice.IOS.AudioSessionParameters Photon.Voice.Unity.Recorder::audioSessionParameters
	AudioSessionParameters_t1AF1732698B36F46E4914C11DE013498CD279C37 ___audioSessionParameters_28;
	// Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings Photon.Voice.Unity.Recorder::androidNativeMicrophoneSettings
	NativeAndroidMicrophoneSettings_t419E0F59F210A8DA5DC2A057BFB1DC8803537D0B ___androidNativeMicrophoneSettings_29;
	// System.Boolean Photon.Voice.Unity.Recorder::isPausedOrInBackground
	bool ___isPausedOrInBackground_30;
	// System.Boolean Photon.Voice.Unity.Recorder::stopRecordingWhenPaused
	bool ___stopRecordingWhenPaused_31;
	// System.Boolean Photon.Voice.Unity.Recorder::useOnAudioFilterRead
	bool ___useOnAudioFilterRead_32;
	// System.Boolean Photon.Voice.Unity.Recorder::useMicrophoneTypeFallback
	bool ___useMicrophoneTypeFallback_33;
	// System.Boolean Photon.Voice.Unity.Recorder::recordWhenJoined
	bool ___recordWhenJoined_34;
	// Photon.Voice.DeviceInfo Photon.Voice.Unity.Recorder::microphoneDevice
	DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___microphoneDevice_35;
	// System.Int32 Photon.Voice.Unity.Recorder::microphoneDeviceChangePending
	int32_t ___microphoneDeviceChangePending_36;
	// System.Int32 Photon.Voice.Unity.Recorder::restartRecordingPending
	int32_t ___restartRecordingPending_37;
};

// Fusion.SimulationBehaviour
struct SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0  : public Behaviour_tC48CB75EA8921074E7C13DF4D997E1CBBB079015
{
	// Fusion.SimulationBehaviour Fusion.SimulationBehaviour::Prev
	SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0* ___Prev_4;
	// Fusion.SimulationBehaviour Fusion.SimulationBehaviour::Next
	SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0* ___Next_5;
	// Fusion.SimulationBehaviourFlags Fusion.SimulationBehaviour::Flags
	int32_t ___Flags_6;
	// Fusion.NetworkRunner Fusion.SimulationBehaviour::Runner
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___Runner_7;
	// Fusion.NetworkObject Fusion.SimulationBehaviour::Object
	NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* ___Object_8;
};

// Photon.Voice.Unity.Speaker
struct Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE  : public VoiceComponent_t453054E310D019B00B0571863F2C5E66DA8629FF
{
	// Photon.Voice.IAudioOut`1<System.Single> Photon.Voice.Unity.Speaker::audioOutput
	RuntimeObject* ___audioOutput_5;
	// Photon.Voice.AudioOutDelayControl/PlayDelayConfig Photon.Voice.Unity.Speaker::playDelayConfig
	PlayDelayConfig_t7E2F00F08A8F2A3D47AFDD64347913B6409871E2 ___playDelayConfig_6;
	// System.Boolean Photon.Voice.Unity.Speaker::restartOnDeviceChange
	bool ___restartOnDeviceChange_7;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.Speaker::<OnRemoteVoiceRemoveAction>k__BackingField
	Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* ___U3COnRemoteVoiceRemoveActionU3Ek__BackingField_8;
	// Photon.Voice.Unity.RemoteVoiceLink Photon.Voice.Unity.Speaker::<RemoteVoice>k__BackingField
	RemoteVoiceLink_tC6B459D4BE83C680417FE28AAA063F8163D7F4E4* ___U3CRemoteVoiceU3Ek__BackingField_9;
	// System.Int32 Photon.Voice.Unity.Speaker::restartPlaybackPending
	int32_t ___restartPlaybackPending_10;
};

// Photon.Voice.Unity.VoiceConnection
struct VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3  : public ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4
{
	// Photon.Voice.Unity.VoiceComponentImpl Photon.Voice.Unity.VoiceConnection::voiceComponentImpl
	VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* ___voiceComponentImpl_13;
	// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::client
	LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* ___client_15;
	// Photon.Realtime.SupportLogger Photon.Voice.Unity.VoiceConnection::supportLoggerComponent
	SupportLogger_t853FFDC016DE6BEBBC2DBBF6EA668299E4C524DD* ___supportLoggerComponent_16;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::runInBackground
	bool ___runInBackground_17;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::statsResetInterval
	int32_t ___statsResetInterval_18;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::nextStatsTickCount
	int32_t ___nextStatsTickCount_19;
	// System.Single Photon.Voice.Unity.VoiceConnection::statsReferenceTime
	float ___statsReferenceTime_20;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesLost
	int32_t ___referenceFramesLost_21;
	// System.Int32 Photon.Voice.Unity.VoiceConnection::referenceFramesReceived
	int32_t ___referenceFramesReceived_22;
	// UnityEngine.GameObject Photon.Voice.Unity.VoiceConnection::speakerPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___speakerPrefab_23;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::cachedRemoteVoices
	List_1_t823310AB4F398AE467887CC898545B689B70003F* ___cachedRemoteVoices_24;
	// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::primaryRecorder
	Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___primaryRecorder_25;
	// System.Boolean Photon.Voice.Unity.VoiceConnection::usePrimaryRecorder
	bool ___usePrimaryRecorder_26;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::linkedSpeakers
	List_1_t581C6CC97545A3BE378779CD0B20D123D6DCF950* ___linkedSpeakers_27;
	// System.Collections.Generic.List`1<Photon.Voice.Unity.Recorder> Photon.Voice.Unity.VoiceConnection::recorders
	List_1_tBFD6B7B62FB7763BC57224ED666A855ACCD05536* ___recorders_28;
	// Photon.Realtime.AppSettings Photon.Voice.Unity.VoiceConnection::Settings
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___Settings_29;
	// System.Action`1<Photon.Voice.Unity.Speaker> Photon.Voice.Unity.VoiceConnection::SpeakerLinked
	Action_1_t8567C9C86A4F384D0A5DD2E75B392F263E3C7229* ___SpeakerLinked_30;
	// System.Action`1<Photon.Voice.Unity.RemoteVoiceLink> Photon.Voice.Unity.VoiceConnection::RemoteVoiceAdded
	Action_1_tEDBE6144CEB293C0905C68B84BB211D3950274B3* ___RemoteVoiceAdded_31;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesReceivedPerSecond>k__BackingField
	float ___U3CFramesReceivedPerSecondU3Ek__BackingField_32;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPerSecond>k__BackingField
	float ___U3CFramesLostPerSecondU3Ek__BackingField_33;
	// System.Single Photon.Voice.Unity.VoiceConnection::<FramesLostPercent>k__BackingField
	float ___U3CFramesLostPercentU3Ek__BackingField_34;
};

// Photon.Voice.Fusion.FusionVoiceClient
struct FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E  : public VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3
{
	// Fusion.NetworkRunner Photon.Voice.Fusion.FusionVoiceClient::networkRunner
	NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___networkRunner_35;
	// Photon.Realtime.EnterRoomParams Photon.Voice.Fusion.FusionVoiceClient::voiceRoomParams
	EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___voiceRoomParams_36;
	// System.Boolean Photon.Voice.Fusion.FusionVoiceClient::UseFusionAppSettings
	bool ___UseFusionAppSettings_37;
	// System.Boolean Photon.Voice.Fusion.FusionVoiceClient::UseFusionAuthValues
	bool ___UseFusionAuthValues_38;
};

// Fusion.NetworkBehaviour
struct NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3  : public SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0
{
	// System.Int32* Fusion.NetworkBehaviour::Ptr
	int32_t* ___Ptr_9;
	// System.Int32 Fusion.NetworkBehaviour::ObjectIndex
	int32_t ___ObjectIndex_10;
	// System.Boolean Fusion.NetworkBehaviour::InvokeRpc
	bool ___InvokeRpc_11;
	// Fusion.RpcInvokeData[] Fusion.NetworkBehaviour::RpcCache
	RpcInvokeDataU5BU5D_tC089D978DE881DF71FAD5DD2D541A716E712F722* ___RpcCache_12;
	// System.Int32 Fusion.NetworkBehaviour::WordOffset
	int32_t ___WordOffset_13;
	// System.Int32 Fusion.NetworkBehaviour::WordCount
	int32_t ___WordCount_14;
	// Fusion.NetworkBehaviour/InterpolationDataSources Fusion.NetworkBehaviour::_interpolationDataSource
	int32_t ____interpolationDataSource_15;
	// Fusion.NetworkBehaviourCallbacks Fusion.NetworkBehaviour::DynamicCallbacks
	NetworkBehaviourCallbacks_t4852EFBA213C9FE28E65FDB3192CD93381CF613E* ___DynamicCallbacks_16;
};

// Photon.Voice.Fusion.VoiceNetworkObject
struct VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A  : public NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3
{
	// Photon.Voice.Unity.VoiceComponentImpl Photon.Voice.Fusion.VoiceNetworkObject::voiceComponentImpl
	VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* ___voiceComponentImpl_17;
	// Photon.Voice.Unity.VoiceConnection Photon.Voice.Fusion.VoiceNetworkObject::voiceConnection
	VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* ___voiceConnection_18;
	// Photon.Voice.Unity.Recorder Photon.Voice.Fusion.VoiceNetworkObject::<RecorderInUse>k__BackingField
	Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___U3CRecorderInUseU3Ek__BackingField_19;
	// Photon.Voice.Unity.Speaker Photon.Voice.Fusion.VoiceNetworkObject::<SpeakerInUse>k__BackingField
	Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* ___U3CSpeakerInUseU3Ek__BackingField_20;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<Fusion.SessionInfo>
struct List_1_t1401F7FA1DF1659F914B5A8D1A6B07E195A110AA_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SessionInfoU5BU5D_t133FBAE4F22F8C20FF05757BDBD5CCA1937359B9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Fusion.SessionInfo>

// Fusion.Photon.Realtime.AppSettings

// Fusion.Photon.Realtime.AppSettings

// Photon.Realtime.AppSettings

// Photon.Realtime.AppSettings

// Fusion.Photon.Realtime.AuthenticationValues

// Fusion.Photon.Realtime.AuthenticationValues

// Photon.Realtime.AuthenticationValues

// Photon.Realtime.AuthenticationValues

// Photon.Realtime.EnterRoomParams

// Photon.Realtime.EnterRoomParams

// Fusion.HostMigrationToken

// Fusion.HostMigrationToken

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Photon.Realtime.RoomInfo

// Photon.Realtime.RoomInfo

// Photon.Realtime.RoomOptions

// Photon.Realtime.RoomOptions

// Fusion.SessionInfo

// Fusion.SessionInfo

// ExitGames.Client.Photon.StreamBuffer

// ExitGames.Client.Photon.StreamBuffer

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// Photon.Voice.Unity.VoiceComponentImpl

// Photon.Voice.Unity.VoiceComponentImpl

// Photon.Voice.Unity.VoiceComponentImpl/LoggerImpl

// Photon.Voice.Unity.VoiceComponentImpl/LoggerImpl

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.Byte>

// Fusion.Changed`1<Photon.Voice.Fusion.VoiceNetworkObject>

// Fusion.Changed`1<Photon.Voice.Fusion.VoiceNetworkObject>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>

// NanoSockets.Address

// NanoSockets.Address

// Photon.Voice.IOS.AudioSessionParameters

// Photon.Voice.IOS.AudioSessionParameters

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// Photon.Voice.DeviceInfo
struct DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335_StaticFields
{
	// Photon.Voice.DeviceInfo Photon.Voice.DeviceInfo::Default
	DeviceInfo_tC91EF4D866BBBA8B68A503B620A00F15C60C2335 ___Default_6;
};

// Photon.Voice.DeviceInfo

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Fusion.NetworkId

// Fusion.NetworkId

// Fusion.NetworkInput

// Fusion.NetworkInput

// Fusion.NetworkObjectPredictionKey

// Fusion.NetworkObjectPredictionKey

// Fusion.NetworkPrefabId

// Fusion.NetworkPrefabId

// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A_StaticFields
{
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.PhotonPortDefinition::AlternativeUdpPorts
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___AlternativeUdpPorts_0;
};

// Photon.Realtime.PhotonPortDefinition

// Fusion.PlayerRef

// Fusion.PlayerRef

// Fusion.ReadAccuracy

// Fusion.ReadAccuracy

// Photon.Realtime.Room

// Photon.Realtime.Room

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// Fusion.SceneRef

// Fusion.SceneRef

// Fusion.SimulationMessagePtr

// Fusion.SimulationMessagePtr

// Fusion.Tick

// Fusion.Tick

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// Fusion.WriteAccuracy

// Fusion.WriteAccuracy

// Photon.Voice.AudioOutDelayControl/PlayDelayConfig
struct PlayDelayConfig_t7E2F00F08A8F2A3D47AFDD64347913B6409871E2_StaticFields
{
	// Photon.Voice.AudioOutDelayControl/PlayDelayConfig Photon.Voice.AudioOutDelayControl/PlayDelayConfig::Default
	PlayDelayConfig_t7E2F00F08A8F2A3D47AFDD64347913B6409871E2 ___Default_0;
};

// Photon.Voice.AudioOutDelayControl/PlayDelayConfig

// Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer

// Fusion.NetworkObjectGuid/<RawGuidValue>e__FixedBuffer

// Fusion.NetworkRunner/DeferredShutdownParams

// Fusion.NetworkRunner/DeferredShutdownParams

// Fusion.NetworkRunner/HostSnapshotCompressionJob

// Fusion.NetworkRunner/HostSnapshotCompressionJob

// Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings
struct NativeAndroidMicrophoneSettings_t419E0F59F210A8DA5DC2A057BFB1DC8803537D0B_StaticFields
{
	// Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings::Default
	NativeAndroidMicrophoneSettings_t419E0F59F210A8DA5DC2A057BFB1DC8803537D0B ___Default_3;
};

// Photon.Voice.Unity.Recorder/NativeAndroidMicrophoneSettings

// System.Nullable`1<Fusion.SceneRef>

// System.Nullable`1<Fusion.SceneRef>

// System.Nullable`1<Fusion.NetworkRunner/HostSnapshotCompressionJob>

// System.Nullable`1<Fusion.NetworkRunner/HostSnapshotCompressionJob>

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Unity.Jobs.JobHandle

// Unity.Jobs.JobHandle

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_StaticFields
{
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80* ___ProtocolToNameServerPort_11;
};

// Photon.Realtime.LoadBalancingClient

// Fusion.Sockets.NetAddress
struct NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678_StaticFields
{
	// Fusion.Sockets.NetAddress Fusion.Sockets.NetAddress::AnyIPv4Addr
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___AnyIPv4Addr_5;
	// Fusion.Sockets.NetAddress Fusion.Sockets.NetAddress::AnyIPv6Addr
	NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___AnyIPv6Addr_6;
};

// Fusion.Sockets.NetAddress

// Fusion.NetworkObjectGuid

// Fusion.NetworkObjectGuid

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Fusion.NetworkObject/PredictionData

// Fusion.NetworkObject/PredictionData

// System.Nullable`1<Unity.Jobs.JobHandle>

// System.Nullable`1<Unity.Jobs.JobHandle>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// Photon.Voice.LoadBalancingTransport

// Photon.Voice.LoadBalancingTransport

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// Fusion.NetworkRunnerCallbackArgs/ConnectRequest

// Fusion.NetworkRunnerCallbackArgs/ConnectRequest

// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>

// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// ExitGames.Client.Photon.DeserializeStreamMethod

// ExitGames.Client.Photon.DeserializeStreamMethod

// System.IO.IOException

// System.IO.IOException

// Fusion.Photon.Realtime.PhotonAppSettings
struct PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD_StaticFields
{
	// Fusion.Photon.Realtime.PhotonAppSettings Fusion.Photon.Realtime.PhotonAppSettings::_instance
	PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD* ____instance_5;
};

// Fusion.Photon.Realtime.PhotonAppSettings

// ExitGames.Client.Photon.SerializeStreamMethod

// ExitGames.Client.Photon.SerializeStreamMethod

// System.IO.EndOfStreamException

// System.IO.EndOfStreamException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Fusion.Behaviour

// Fusion.Behaviour

// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_StaticFields
{
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_9;
};

// Photon.Realtime.ConnectionHandler

// Photon.Voice.Unity.VoiceComponent

// Photon.Voice.Unity.VoiceComponent

// Photon.Voice.Unity.VoiceLogger

// Photon.Voice.Unity.VoiceLogger

// Fusion.NetworkObject

// Fusion.NetworkObject

// Fusion.NetworkRunner
struct NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Fusion.NetworkRunner> Fusion.NetworkRunner::_instancesByMultiPeerScene
	Dictionary_2_t8043B6C785B439524A8755BCF6A5CC3612CFCFCD* ____instancesByMultiPeerScene_4;
	// Fusion.Simulation/IDeltaCompressor Fusion.NetworkRunner::BurstDeltaCompressor
	RuntimeObject* ___BurstDeltaCompressor_6;
	// System.Collections.Generic.List`1<Fusion.NetworkRunner> Fusion.NetworkRunner::_instances
	List_1_t4E19FDB35A290EF8B9F1EFF40BF743FAC97AA281* ____instances_45;
	// Fusion.NetworkRunner[] Fusion.NetworkRunner::_instancesSnapshot
	NetworkRunnerU5BU5D_tDA69BE78BB341E0EA1AFC6CB984B303A36561725* ____instancesSnapshot_46;
	// System.Int32 Fusion.NetworkRunner::_instancesSnapshotCount
	int32_t ____instancesSnapshotCount_47;
};

// Fusion.NetworkRunner

// Photon.Voice.Unity.Recorder

// Photon.Voice.Unity.Recorder

// Fusion.SimulationBehaviour

// Fusion.SimulationBehaviour

// Photon.Voice.Unity.Speaker

// Photon.Voice.Unity.Speaker

// Photon.Voice.Unity.VoiceConnection

// Photon.Voice.Unity.VoiceConnection

// Photon.Voice.Fusion.FusionVoiceClient
struct FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_StaticFields
{
	// System.Byte[] Photon.Voice.Fusion.FusionVoiceClient::memCompressedUInt64
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___memCompressedUInt64_40;
};

// Photon.Voice.Fusion.FusionVoiceClient

// Fusion.NetworkBehaviour

// Fusion.NetworkBehaviour

// Photon.Voice.Fusion.VoiceNetworkObject
struct VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A_StaticFields
{
	// Fusion.Changed`1<Photon.Voice.Fusion.VoiceNetworkObject> Photon.Voice.Fusion.VoiceNetworkObject::$IL2CPP_CHANGED
	Changed_1_t15F1762CD7C10AE9C17894E6A2D040696945484D ___U24IL2CPP_CHANGED_21;
	// Fusion.ChangedDelegate`1<Photon.Voice.Fusion.VoiceNetworkObject> Photon.Voice.Fusion.VoiceNetworkObject::$IL2CPP_CHANGED_DELEGATE
	ChangedDelegate_1_t03CD478B3545EA55EBD4A43E4D35BD085AEDF09C* ___U24IL2CPP_CHANGED_DELEGATE_22;
	// Fusion.NetworkBehaviourCallbacks`1<Photon.Voice.Fusion.VoiceNetworkObject> Photon.Voice.Fusion.VoiceNetworkObject::$IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS
	NetworkBehaviourCallbacks_1_tDCBF78F749654278A55E3A2335EE2C487A40524B* ___U24IL2CPP_NETWORK_BEHAVIOUR_CALLBACKS_23;
};

// Photon.Voice.Fusion.VoiceNetworkObject
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Photon.Voice.Unity.Recorder[]
struct RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D  : public RuntimeArray
{
	ALIGN_FIELD (8) Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* m_Items[1];

	inline Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Voice.Unity.Speaker[]
struct SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589  : public RuntimeArray
{
	ALIGN_FIELD (8) Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* m_Items[1];

	inline Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32Enum,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mEBF3FAD6176B0ABD7207DA4D7239671D972C82E6_gshared (Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T Fusion.NetworkRunner::TryGetNetworkedBehaviourFromNetworkedObjectRef<System.Object>(Fusion.NetworkId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkRunner_TryGetNetworkedBehaviourFromNetworkedObjectRef_TisRuntimeObject_m570BA10214FBFF0F95E3D1D239AA5C34F34F5D14_gshared (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 ___0_id, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method) ;

// Fusion.NetworkRunner/States Fusion.NetworkRunner::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkRunner_get_State_mDEEA672DEC5B30647CCAF02C257EFF7DF474A405 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.VoiceConnection::get_UsePrimaryRecorder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceConnection_get_UsePrimaryRecorder_m50587F8EEAE8AA3D379D8738E72F9128EE2B41C5_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// Photon.Voice.Unity.Recorder Photon.Voice.Unity.VoiceConnection::get_PrimaryRecorder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.VoiceConnection::AddRecorder(Photon.Voice.Unity.Recorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceConnection_AddRecorder_mB900C30435DC2504DD5B8D1AC09EFF869026FC34 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___0_rec, const RuntimeMethod* method) ;
// Photon.Voice.ILogger Photon.Voice.Unity.VoiceConnection::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Boolean Fusion.NetworkRunner::get_IsPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRunner_get_IsPlayer_m18D73884EC05320EC009F1397F9551EB8AD8C27B (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkRunner::get_IsConnectedToServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRunner_get_IsConnectedToServer_m128BF740B13F4AA90FF1CC19102414BD50557008 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkRunner::get_IsServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkRunner_get_IsServer_mADB2CCEA9E7F7EAFE23CE9BBE640947CEEC0ACDE (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Fusion.FusionVoiceClient::VoiceConnectOrJoinRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_VoiceConnectOrJoinRoom_mE0AB72A8F8C4716E019A6DE3BC0ED641F729F583 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceConnection::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_Awake_mEAF8D90F6EDA8095630C882500D0A67A7C1B9226 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Fusion.NetworkRunner>()
inline NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* Component_GetComponent_TisNetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_m261B3A5A4DAE6C5E6A7689716AA5871C63B92F24 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::VoiceRegisterCustomTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_VoiceRegisterCustomTypes_m5B57FDA6F5007E94C17054141FFA64D07063EDEC (const RuntimeMethod* method) ;
// Photon.Voice.LoadBalancingTransport Photon.Voice.Unity.VoiceConnection::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m914229254E2DD1066D0E81418D2410B78F40DEBB (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mEBF3FAD6176B0ABD7207DA4D7239671D972C82E6_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Photon.Realtime.LoadBalancingClient::add_StateChanged(System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_add_StateChanged_mA6384FF2BBFAD74989F27734C0A2251F6F470EB9 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceConnection::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_OnDestroy_mE728411AFE39DCE501501CD2317DE93E08BDCD68 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::remove_StateChanged(System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_remove_StateChanged_m05D0CADDC74CE72BDD2CC9BBCBA8257D9CACD85B (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// Photon.Voice.Unity.Speaker Photon.Voice.Unity.VoiceConnection::InstantiateSpeakerPrefab(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* VoiceConnection_InstantiateSpeakerPrefab_mDD60AB3AD1E77FD893A7FB8FD131E099CDAAB8A1 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_parent, bool ___1_destroyOnRemove, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkId::get_IsValid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkId_get_IsValid_mB187D7E27086E68CB506465288650AEC6A42EB4E_inline (NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2* __this, const RuntimeMethod* method) ;
// T Fusion.NetworkRunner::TryGetNetworkedBehaviourFromNetworkedObjectRef<Photon.Voice.Fusion.VoiceNetworkObject>(Fusion.NetworkId)
inline VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* NetworkRunner_TryGetNetworkedBehaviourFromNetworkedObjectRef_TisVoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A_m8ADCE08CAE82FD433C2145A4BDCEE1E8697FB184 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 ___0_id, const RuntimeMethod* method)
{
	return ((  VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* (*) (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A*, NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2, const RuntimeMethod*))NetworkRunner_TryGetNetworkedBehaviourFromNetworkedObjectRef_TisRuntimeObject_m570BA10214FBFF0F95E3D1D239AA5C34F34F5D14_gshared)(__this, ___0_id, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// Photon.Voice.Unity.Speaker Photon.Voice.Fusion.VoiceNetworkObject::get_SpeakerInUse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* VoiceNetworkObject_get_SpeakerInUse_m6EBF80B9F90F78438EB68F0403A970C75E621869_inline (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) ;
// Fusion.SessionInfo Fusion.NetworkRunner::get_SessionInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB* NetworkRunner_get_SessionInfo_m8E7EDE44DB7D97AA9573EA0CB1C9BC0761D8F867_inline (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.String Fusion.SessionInfo::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionInfo_get_Name_m3BB6976C2C53839B7E75A3CD326C2A1555078DFC_inline (SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// Photon.Realtime.ClientState Photon.Voice.Unity.VoiceConnection::get_ClientState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VoiceConnection_get_ClientState_m9BCB9B181CD63F8375AF8A370DDCCBBF84BA8694 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Fusion.FusionVoiceClient::VoiceConnectAndFollowFusion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FusionVoiceClient_VoiceConnectAndFollowFusion_mA96A689B57A08C88C46E62BAEDEF98A5B41F1AF4 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Fusion.FusionVoiceClient::VoiceJoinMirroringRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FusionVoiceClient_VoiceJoinMirroringRoom_m1E799F80536C9E53CBB48FCC512B77E4063A3F6A (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, const RuntimeMethod* method) ;
// System.String Photon.Voice.Fusion.FusionVoiceClient::VoiceGetMirroringRoomName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FusionVoiceClient_VoiceGetMirroringRoomName_m11F879D94726E71E3BA8C223FC1E267F4CD20321 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, const RuntimeMethod* method) ;
// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::get_CurrentRoom()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Room::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Room_get_Name_m8C466150335A007F72B11711AB64F9F62288D500_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpLeaveRoom(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpLeaveRoom_m7537326F58896C437BC18C40657D698602D46DA1 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, bool ___0_becomeInactive, bool ___1_sendAuthCookie, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.AppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppSettings__ctor_m0E9EF98D6C1FB02C989504407836FDA2B019AA43 (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* __this, const RuntimeMethod* method) ;
// Fusion.Photon.Realtime.PhotonAppSettings Fusion.Photon.Realtime.PhotonAppSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD* PhotonAppSettings_get_Instance_m8F359CEB5746EF5903136E1E6F4A24D19007961D (const RuntimeMethod* method) ;
// Photon.Realtime.AppSettings Photon.Realtime.AppSettings::CopyTo(Photon.Realtime.AppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* AppSettings_CopyTo_mE304EF3079424281AC51411AB237969412FD6F93 (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* __this, AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___0_d, const RuntimeMethod* method) ;
// System.String Fusion.SessionInfo::get_Region()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionInfo_get_Region_m979863C8A75595985C638ECCE43174E955DBFDE0_inline (SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___0_a, String_t* ___1_b, int32_t ___2_comparisonType, const RuntimeMethod* method) ;
// Fusion.Photon.Realtime.AuthenticationValues Fusion.NetworkRunner::get_AuthenticationValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* NetworkRunner_get_AuthenticationValues_m2D8D90A54E0CB933C0515364C41836A07CEDB0C7 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.String Fusion.Photon.Realtime.AuthenticationValues::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m3E453140CA632A1F55A0BB96ECA5F61A878F838E_inline (AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.AuthenticationValues::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_mB9476858AE6869B09BACEB0BBBE1A6670B5710F8 (AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* __this, String_t* ___0_userId, const RuntimeMethod* method) ;
// System.String Fusion.Photon.Realtime.AuthenticationValues::get_AuthGetParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_mFD417A06D769F51083D11C4BC6F7C2B698095232_inline (AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.AuthenticationValues::set_AuthGetParameters(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m1414AD92FAC10BA328BF31068ED47CB16ECF0E07_inline (AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// Fusion.Photon.Realtime.CustomAuthenticationType Fusion.Photon.Realtime.AuthenticationValues::get_AuthType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_mFBE279F7D91B4721D1F660F1D336A574DD9BDD7C (AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.AuthenticationValues::set_AuthType(Photon.Realtime.CustomAuthenticationType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthType_m56996D622EEB81A2482DDCDCB1459EE56FE332EE_inline (AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::set_AuthValues(Photon.Realtime.AuthenticationValues)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadBalancingClient_set_AuthValues_mAFB66C3CFA04587CBA1A60711581B2BA6C6FD84C_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___0_value, const RuntimeMethod* method) ;
// System.Object Fusion.Photon.Realtime.AuthenticationValues::get_AuthPostData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationValues_get_AuthPostData_m6193DF5F2347E2E843BE98CC4A27FF1A324D35FE_inline (AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* __this, const RuntimeMethod* method) ;
// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::get_AuthValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::Disconnect(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_Disconnect_m9E92F0FD6E20FA7FCB107FD132A62F6DEEC9AEF8 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, int32_t ___0_cause, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpJoinOrCreateRoom(Photon.Realtime.EnterRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpJoinOrCreateRoom_m09D399AF025F96C6CD7E93EB2F4C2EE3600CE26F (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___0_enterRoomParams, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Fusion.FusionVoiceClient::VoiceJoinRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FusionVoiceClient_VoiceJoinRoom_m8838A19F1A5653EBD25D4FF8674261DF1F87FB69 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, String_t* ___0_voiceRoomName, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.SerializeStreamMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeStreamMethod__ctor_m5376C1328841C387EBC8F69D049E5996F8769DAE (SerializeStreamMethod_tE9A207ADBB74A63C939A741C47F75676E0A82BEF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.DeserializeStreamMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializeStreamMethod__ctor_mAC6E216CA62F8C560F91E692482D952FD6CCB9A8 (DeserializeStreamMethod_tC0EA7F2D58AD1B0A85B30C169AAEBD600889E448* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::RegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonPeer_RegisterType_mEA2D37BB629046E08937932BFEB961C4DDE95CBC (Type_t* ___0_customType, uint8_t ___1_code, SerializeStreamMethod_tE9A207ADBB74A63C939A741C47F75676E0A82BEF* ___2_serializeMethod, DeserializeStreamMethod_tC0EA7F2D58AD1B0A85B30C169AAEBD600889E448* ___3_constructor, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.UInt64 Photon.Voice.Fusion.FusionVoiceClient::ReadCompressedUInt64(ExitGames.Client.Photon.StreamBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FusionVoiceClient_ReadCompressedUInt64_mF25CF9FA9AC9D3DBD3D813CF1D93E7ED4FBCD9AC (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* ___0_stream, const RuntimeMethod* method) ;
// System.Byte[] ExitGames.Client.Photon.StreamBuffer::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* StreamBuffer_GetBuffer_mB347ABAE3E9F1FD59A8657B965D85CB4AE8C2479 (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* __this, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.StreamBuffer::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamBuffer_get_Position_m61D98C2FFB37B4FEEDC2790FD8E432B004FB47F4 (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* __this, const RuntimeMethod* method) ;
// System.Void System.IO.EndOfStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.StreamBuffer::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_set_Position_mE4F84AAB7F10D3EAA4639CFC26CB45C0EF7C6460 (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.StreamBuffer::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamBuffer_Write_mB8F9B0B3609D1304433FBF99468A5F6807BBC1AE (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_srcOffset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Int32 Photon.Voice.Fusion.FusionVoiceClient::WriteCompressedUInt64(ExitGames.Client.Photon.StreamBuffer,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionVoiceClient_WriteCompressedUInt64_m3A9E99F301AE16E546E7495FF47E1F28AC6DE719 (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* ___0_stream, uint64_t ___1_value, const RuntimeMethod* method) ;
// Fusion.PlayerRef Fusion.NetworkRunner::get_LocalPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC NetworkRunner_get_LocalPlayer_mC7AB05AEC180A8376D2667583C90F88FE8DB28F7 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.PlayerRef::op_Equality(Fusion.PlayerRef,Fusion.PlayerRef)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayerRef_op_Equality_mDE02A4E3B6FC2CE8E570A1DFE9A4A58965CDDFB0_inline (PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___0_a, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___1_b, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Fusion.FusionVoiceClient::VoiceDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_VoiceDisconnect_m442B861A85DB77A24902B349AFCA273EC8540EE9 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.EnterRoomParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterRoomParams__ctor_m59BB4C9762321F59D7238996F68C7EB970ACDBB8 (EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m06A5DAB18D3385E8AED5DA84C8A89D9C7E8498F8 (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RoomOptions::set_IsVisible(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RoomOptions_set_IsVisible_m5D9ACD84A11FD6E37F023C2181653923AEE7AB25_inline (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection__ctor_mDD2B56D6410FC2EFB93CE951934278B858BD7D52 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// Photon.Voice.ILogger Photon.Voice.Unity.VoiceComponentImpl::get_Logger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceComponentImpl_get_Logger_m6E20399A6E734B3AC8EB490619C5493BB6270F00_inline (VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* __this, const RuntimeMethod* method) ;
// Photon.Voice.Unity.VoiceLogger Photon.Voice.Unity.VoiceComponentImpl::get_VoiceLogger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* VoiceComponentImpl_get_VoiceLogger_m68E547673757E3876B19470DCC87CB34E618E1E6_inline (VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Speaker::get_IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Speaker_get_IsPlaying_m7F784C6E15456AD329779754D88D97E6C81BD842 (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* __this, const RuntimeMethod* method) ;
// Photon.Voice.Unity.Recorder Photon.Voice.Fusion.VoiceNetworkObject::get_RecorderInUse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* VoiceNetworkObject_get_RecorderInUse_m98EB0A537DAA9C74D6B9BAF3F57425BFEFFD5CE6_inline (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Recorder::get_IsCurrentlyTransmitting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Recorder_get_IsCurrentlyTransmitting_m0DF2BF010EAC026A19DC9B9FD67A3712594B54C2 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// Fusion.SimulationConfig/Topologies Fusion.NetworkRunner::get_Topology()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkRunner_get_Topology_m8376FC947B68EE9E85978E091F420B988471B006 (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkObject::get_HasInputAuthority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkObject_get_HasInputAuthority_m09F41B4EB708280E2D3E873F6ECCBAB9BCDCF96E (NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* __this, const RuntimeMethod* method) ;
// System.Boolean Fusion.NetworkObject::get_HasStateAuthority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkObject_get_HasStateAuthority_m20DFCBB66C787E2B2ED94B31AC1035B62251CC07 (NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<Photon.Voice.Unity.Recorder>()
inline RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D* Component_GetComponentsInChildren_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mDAB4705723E98C6792AE2864689F9C8182851FEE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// Photon.Voice.ILogger Photon.Voice.Fusion.VoiceNetworkObject::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceNetworkObject_get_Logger_mB04850713723A898F337FE047518057A2C9393D8 (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Object Photon.Voice.Fusion.VoiceNetworkObject::GetUserData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceNetworkObject_GetUserData_m9B6EE10B4D6B3A9D95B7F2A9AD38B9210ED3E895 (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.Recorder::set_UserData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recorder_set_UserData_m1C4EEB773903B76FAA6A48AD20B670189237CDE0 (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Fusion.VoiceNetworkObject::set_RecorderInUse(Photon.Voice.Unity.Recorder)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoiceNetworkObject_set_RecorderInUse_mAC7978CE573E68D5AC9B46AD69CFE625D491F714_inline (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___0_value, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<Photon.Voice.Unity.Speaker>(System.Boolean)
inline SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589* Component_GetComponentsInChildren_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_m62F935FB313C574220B837413E1E706B459EE5D6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___0_includeInactive, method);
}
// UnityEngine.GameObject Photon.Voice.Unity.VoiceConnection::get_SpeakerPrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* VoiceConnection_get_SpeakerPrefab_m826BAD6BF3DBF46103C4E21FFB9A164D9BBCF997_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Fusion.VoiceNetworkObject::set_SpeakerInUse(Photon.Voice.Unity.Speaker)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoiceNetworkObject_set_SpeakerInUse_m6053CB8064868273B21E1C59E82C1DBFAE4E4F53_inline (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* ___0_value, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceComponentImpl::Awake(UnityEngine.MonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponentImpl_Awake_m182804A770139122B8BEBD9C94545385BAE37D12 (VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* __this, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___0_mb, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Photon.Voice.Unity.VoiceConnection>()
inline VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* Component_GetComponent_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mC02525F212FBAB52EA4209DB8C6FD548825C81D4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean Photon.Voice.Fusion.VoiceNetworkObject::get_IsLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceNetworkObject_get_IsLocal_mE98625D6B07F1ECB5CAEA409E95AD655B04AE89C (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Fusion.VoiceNetworkObject::SetupRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceNetworkObject_SetupRecorder_mE9E70367FADC9AEC3417CE18692963483346F9CF (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.Recorder::get_TransmitEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_TransmitEnabled_mD117C665FA63F1C56E815F8808E6B5A02241F91E_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Fusion.VoiceNetworkObject::SetupSpeaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceNetworkObject_SetupSpeaker_mD80C4A9B7C8BE68F4D6C1E86306D5B531A30F125 (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Voice.Unity.VoiceConnection::AddSpeaker(Photon.Voice.Unity.Speaker,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceConnection_AddSpeaker_m255966C4FF57ACA47BA15C49CE3F65547ADEB02B (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* ___0_speaker, RuntimeObject* ___1_userData, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceConnection::RemoveRecorder(Photon.Voice.Unity.Recorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceConnection_RemoveRecorder_m12180A6A74203EF2997F2011FD15CD2E59A83E97 (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___0_rec, const RuntimeMethod* method) ;
// System.Void Photon.Voice.Unity.VoiceComponentImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceComponentImpl__ctor_m1C339415DBAC499F34BE8A55F3D8CAA0314FD70E (VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* __this, const RuntimeMethod* method) ;
// System.Void Fusion.NetworkBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkBehaviour__ctor_m80B5DC72F7815EEC5B6DDF46B9AF965112268053 (NetworkBehaviour_t6DC912DE6ED4D9C556AE37A4CC23D247C52C57B3* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Start_m167F919DF8A629E2ABF2FF23739F41AC8A61ABA3 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493FE7F94FDC85045F0BE8971C31BED9290C8526);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.networkRunner.State == NetworkRunner.States.Shutdown)
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = __this->___networkRunner_35;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = NetworkRunner_get_State_mDEEA672DEC5B30647CCAF02C257EFF7DF474A405(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (this.UsePrimaryRecorder)
		bool L_2;
		L_2 = VoiceConnection_get_UsePrimaryRecorder_m50587F8EEAE8AA3D379D8738E72F9128EE2B41C5_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		// if (this.PrimaryRecorder != null)
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_3;
		L_3 = VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// AddRecorder(this.PrimaryRecorder);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_5;
		L_5 = VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7_inline(__this, NULL);
		bool L_6;
		L_6 = VoiceConnection_AddRecorder_mB900C30435DC2504DD5B8D1AC09EFF869026FC34(__this, L_5, NULL);
		goto IL_0049;
	}

IL_0034:
	{
		// this.Logger.LogError("Primary Recorder is not set.");
		RuntimeObject* L_7;
		L_7 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_7, _stringLiteral493FE7F94FDC85045F0BE8971C31BED9290C8526, L_8);
	}

IL_0049:
	{
		// if (this.networkRunner.IsPlayer && (this.networkRunner.IsConnectedToServer || this.networkRunner.IsServer))
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_9 = __this->___networkRunner_35;
		NullCheck(L_9);
		bool L_10;
		L_10 = NetworkRunner_get_IsPlayer_m18D73884EC05320EC009F1397F9551EB8AD8C27B(L_9, NULL);
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_11 = __this->___networkRunner_35;
		NullCheck(L_11);
		bool L_12;
		L_12 = NetworkRunner_get_IsConnectedToServer_m128BF740B13F4AA90FF1CC19102414BD50557008(L_11, NULL);
		if (L_12)
		{
			goto IL_0070;
		}
	}
	{
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_13 = __this->___networkRunner_35;
		NullCheck(L_13);
		bool L_14;
		L_14 = NetworkRunner_get_IsServer_mADB2CCEA9E7F7EAFE23CE9BBE640947CEEC0ACDE(L_13, NULL);
		if (!L_14)
		{
			goto IL_0076;
		}
	}

IL_0070:
	{
		// this.VoiceConnectOrJoinRoom();
		FusionVoiceClient_VoiceConnectOrJoinRoom_mE0AB72A8F8C4716E019A6DE3BC0ED641F729F583(__this, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Awake_m89C05B51AAF240B9B98211C88B8FEA2DAD8761A9 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_m261B3A5A4DAE6C5E6A7689716AA5871C63B92F24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionVoiceClient_OnVoiceClientStateChanged_m3898729CF1DF884F0375B31C0588A074D5D371C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		VoiceConnection_Awake_mEAF8D90F6EDA8095630C882500D0A67A7C1B9226(__this, NULL);
		// this.networkRunner = this.GetComponent<NetworkRunner>();
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0;
		L_0 = Component_GetComponent_TisNetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_m261B3A5A4DAE6C5E6A7689716AA5871C63B92F24(__this, Component_GetComponent_TisNetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A_m261B3A5A4DAE6C5E6A7689716AA5871C63B92F24_RuntimeMethod_var);
		__this->___networkRunner_35 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___networkRunner_35), (void*)L_0);
		// VoiceRegisterCustomTypes();
		il2cpp_codegen_runtime_class_init_inline(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var);
		FusionVoiceClient_VoiceRegisterCustomTypes_m5B57FDA6F5007E94C17054141FFA64D07063EDEC(NULL);
		// this.Client.StateChanged += this.OnVoiceClientStateChanged;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_1;
		L_1 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* L_2 = (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490*)il2cpp_codegen_object_new(Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_2__ctor_m914229254E2DD1066D0E81418D2410B78F40DEBB(L_2, __this, (intptr_t)((void*)FusionVoiceClient_OnVoiceClientStateChanged_m3898729CF1DF884F0375B31C0588A074D5D371C1_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		LoadBalancingClient_add_StateChanged_mA6384FF2BBFAD74989F27734C0A2251F6F470EB9(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_OnDestroy_m2B3F5FCB175C8B3B1D363C8454EC7A8F0D4A45F0 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionVoiceClient_OnVoiceClientStateChanged_m3898729CF1DF884F0375B31C0588A074D5D371C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDestroy();
		VoiceConnection_OnDestroy_mE728411AFE39DCE501501CD2317DE93E08BDCD68(__this, NULL);
		// this.Client.StateChanged -= this.OnVoiceClientStateChanged;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_0;
		L_0 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* L_1 = (Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490*)il2cpp_codegen_object_new(Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_2__ctor_m914229254E2DD1066D0E81418D2410B78F40DEBB(L_1, __this, (intptr_t)((void*)FusionVoiceClient_OnVoiceClientStateChanged_m3898729CF1DF884F0375B31C0588A074D5D371C1_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		LoadBalancingClient_remove_StateChanged_m05D0CADDC74CE72BDD2CC9BBCBA8257D9CACD85B(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::OnVoiceClientStateChanged(Photon.Realtime.ClientState,Photon.Realtime.ClientState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_OnVoiceClientStateChanged_m3898729CF1DF884F0375B31C0588A074D5D371C1 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, int32_t ___0_previous, int32_t ___1_current, const RuntimeMethod* method) 
{
	{
		// this.VoiceConnectOrJoinRoom();
		FusionVoiceClient_VoiceConnectOrJoinRoom_mE0AB72A8F8C4716E019A6DE3BC0ED641F729F583(__this, NULL);
		// }
		return;
	}
}
// Photon.Voice.Unity.Speaker Photon.Voice.Fusion.FusionVoiceClient::InstantiateSpeakerForRemoteVoice(System.Int32,System.Byte,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* FusionVoiceClient_InstantiateSpeakerForRemoteVoice_m8AA618CF7C9D18B2CE97BC641482FA9BC85A676B (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, int32_t ___0_playerId, uint8_t ___1_voiceId, RuntimeObject* ___2_userData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkRunner_TryGetNetworkedBehaviourFromNetworkedObjectRef_TisVoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A_m8ADCE08CAE82FD433C2145A4BDCEE1E8697FB184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05E941BCBF65DA65C271E4EAD5960284F6DA04D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E1CADA76DBB148E93E15A81E44914373621278C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9BABDD3FD6D56D8D9EF9D84DCECF78EC13522B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE54D77B1762936EA26FB725B12CD0658F922B2B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA3D3C96BDAD6A74C31E8DE53FC1EEE65FCA5F9C);
		s_Il2CppMethodInitialized = true;
	}
	NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* V_1 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	RuntimeObject* G_B5_4 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	RuntimeObject* G_B4_4 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	RuntimeObject* G_B6_5 = NULL;
	{
		// if (userData == null) // Recorder w/o VoiceNetworkObject: probably created due to this.UsePrimaryRecorder = true
		RuntimeObject* L_0 = ___2_userData;
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		// this.Logger.LogInfo("Creating Speaker for remote voice {0}/{1} FusionVoiceClient Primary Recorder (userData == null).", playerId, voiceId);
		RuntimeObject* L_1;
		L_1 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___0_playerId;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		uint8_t L_8 = ___1_voiceId;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_1, _stringLiteral9E1CADA76DBB148E93E15A81E44914373621278C, L_7);
		// return this.InstantiateSpeakerPrefab(this.gameObject, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_12;
		L_12 = VoiceConnection_InstantiateSpeakerPrefab_mDD60AB3AD1E77FD893A7FB8FD131E099CDAAB8A1(__this, L_11, (bool)1, NULL);
		return L_12;
	}

IL_0039:
	{
		// if (!(userData is NetworkId))
		RuntimeObject* L_13 = ___2_userData;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_13, NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		// this.Logger.LogWarning("UserData ({0}) is not of type NetworkId. Remote voice {1}/{2} not linked. Do you have a Recorder not used with a VoiceNetworkObject? is this expected?",
		//     userData == null ? "null" : userData.ToString(), playerId, voiceId);
		RuntimeObject* L_14;
		L_14 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		RuntimeObject* L_17 = ___2_userData;
		G_B4_0 = 0;
		G_B4_1 = L_16;
		G_B4_2 = L_16;
		G_B4_3 = _stringLiteral05E941BCBF65DA65C271E4EAD5960284F6DA04D4;
		G_B4_4 = L_14;
		if (!L_17)
		{
			G_B5_0 = 0;
			G_B5_1 = L_16;
			G_B5_2 = L_16;
			G_B5_3 = _stringLiteral05E941BCBF65DA65C271E4EAD5960284F6DA04D4;
			G_B5_4 = L_14;
			goto IL_005f;
		}
	}
	{
		RuntimeObject* L_18 = ___2_userData;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		G_B6_0 = L_19;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		G_B6_5 = G_B4_4;
		goto IL_0064;
	}

IL_005f:
	{
		G_B6_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
		G_B6_5 = G_B5_4;
	}

IL_0064:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = G_B6_3;
		int32_t L_21 = ___0_playerId;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		uint8_t L_25 = ___1_voiceId;
		uint8_t L_26 = L_25;
		RuntimeObject* L_27 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_27);
		NullCheck(G_B6_5);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, G_B6_5, G_B6_4, L_24);
		// return null;
		return (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE*)NULL;
	}

IL_007e:
	{
		// NetworkId networkId = (NetworkId)userData;
		RuntimeObject* L_28 = ___2_userData;
		V_0 = ((*(NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2*)((NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2*)(NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2*)UnBox(L_28, NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_il2cpp_TypeInfo_var))));
		// if (!networkId.IsValid)
		bool L_29;
		L_29 = NetworkId_get_IsValid_mB187D7E27086E68CB506465288650AEC6A42EB4E_inline((&V_0), NULL);
		if (L_29)
		{
			goto IL_00c1;
		}
	}
	{
		// this.Logger.LogWarning("NetworkId is not valid ({0}). Remote voice {1}/{2} not linked.", networkId, playerId, voiceId);
		RuntimeObject* L_30;
		L_30 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_31;
		NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 L_33 = V_0;
		NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 L_34 = L_33;
		RuntimeObject* L_35 = Box(NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_35);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_32;
		int32_t L_37 = ___0_playerId;
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_39);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_36;
		uint8_t L_41 = ___1_voiceId;
		uint8_t L_42 = L_41;
		RuntimeObject* L_43 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_43);
		NullCheck(L_30);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_30, _stringLiteralE54D77B1762936EA26FB725B12CD0658F922B2B5, L_40);
		// return null;
		return (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE*)NULL;
	}

IL_00c1:
	{
		// VoiceNetworkObject voiceNetworkObject = this.networkRunner.TryGetNetworkedBehaviourFromNetworkedObjectRef<VoiceNetworkObject>(networkId);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_44 = __this->___networkRunner_35;
		NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 L_45 = V_0;
		NullCheck(L_44);
		VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* L_46;
		L_46 = NetworkRunner_TryGetNetworkedBehaviourFromNetworkedObjectRef_TisVoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A_m8ADCE08CAE82FD433C2145A4BDCEE1E8697FB184(L_44, L_45, NetworkRunner_TryGetNetworkedBehaviourFromNetworkedObjectRef_TisVoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A_m8ADCE08CAE82FD433C2145A4BDCEE1E8697FB184_RuntimeMethod_var);
		V_1 = L_46;
		// if (ReferenceEquals(null, voiceNetworkObject) || !voiceNetworkObject)
		VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* L_47 = V_1;
		if (!L_47)
		{
			goto IL_00d9;
		}
	}
	{
		VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* L_48 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_48, NULL);
		if (L_49)
		{
			goto IL_010c;
		}
	}

IL_00d9:
	{
		// this.Logger.LogWarning("No voiceNetworkObject found with ID {0}. Remote voice {1}/{2} not linked.", networkId, playerId, voiceId);
		RuntimeObject* L_50;
		L_50 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_51 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = L_51;
		NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 L_53 = V_0;
		NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 L_54 = L_53;
		RuntimeObject* L_55 = Box(NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_il2cpp_TypeInfo_var, &L_54);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_55);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_55);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = L_52;
		int32_t L_57 = ___0_playerId;
		int32_t L_58 = L_57;
		RuntimeObject* L_59 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_58);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_59);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = L_56;
		uint8_t L_61 = ___1_voiceId;
		uint8_t L_62 = L_61;
		RuntimeObject* L_63 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_63);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_63);
		NullCheck(L_50);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_50, _stringLiteralFA3D3C96BDAD6A74C31E8DE53FC1EEE65FCA5F9C, L_60);
		// return null;
		return (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE*)NULL;
	}

IL_010c:
	{
		// this.Logger.LogWarning("Using VoiceNetworkObject {0} Speaker for remote voice {1}/{2}.", userData, playerId, voiceId);
		RuntimeObject* L_64;
		L_64 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_65 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_66 = L_65;
		RuntimeObject* L_67 = ___2_userData;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_67);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_68 = L_66;
		int32_t L_69 = ___0_playerId;
		int32_t L_70 = L_69;
		RuntimeObject* L_71 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_70);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_71);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_71);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = L_68;
		uint8_t L_73 = ___1_voiceId;
		uint8_t L_74 = L_73;
		RuntimeObject* L_75 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_74);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_75);
		NullCheck(L_64);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_64, _stringLiteralA9BABDD3FD6D56D8D9EF9D84DCECF78EC13522B7, L_72);
		// return voiceNetworkObject.SpeakerInUse;
		VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* L_76 = V_1;
		NullCheck(L_76);
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_77;
		L_77 = VoiceNetworkObject_get_SpeakerInUse_m6EBF80B9F90F78438EB68F0403A970C75E621869_inline(L_76, NULL);
		return L_77;
	}
}
// System.String Photon.Voice.Fusion.FusionVoiceClient::VoiceGetMirroringRoomName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FusionVoiceClient_VoiceGetMirroringRoomName_m11F879D94726E71E3BA8C223FC1E267F4CD20321 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50208D50C670DDA05B8EDF7259934D70AD2A17B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0}_voice", this.networkRunner.SessionInfo.Name);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = __this->___networkRunner_35;
		NullCheck(L_0);
		SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB* L_1;
		L_1 = NetworkRunner_get_SessionInfo_m8E7EDE44DB7D97AA9573EA0CB1C9BC0761D8F867_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = SessionInfo_get_Name_m3BB6976C2C53839B7E75A3CD326C2A1555078DFC_inline(L_1, NULL);
		String_t* L_3;
		L_3 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral50208D50C670DDA05B8EDF7259934D70AD2A17B4, L_2, NULL);
		return L_3;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::VoiceConnectOrJoinRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_VoiceConnectOrJoinRoom_mE0AB72A8F8C4716E019A6DE3BC0ED641F729F583 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09A40D1B7C5BF8AAC4E83B40EBD90FF52C861E55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B7BDCD055E8976EC2783C6D6E53B0E590E60488);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E18A432BCD116096E8D0F03E0E8A8A2AE263F2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBBF549D0FA6EF293724A95ADA890AE4CABDC7CE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// switch (this.ClientState)
		int32_t L_0;
		L_0 = VoiceConnection_get_ClientState_m9BCB9B181CD63F8375AF8A370DDCCBBF84BA8694(__this, NULL);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)9))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_2;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)9))))
		{
			goto IL_005f;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)14))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)15))))
		{
			goto IL_0041;
		}
	}
	{
		return;
	}

IL_0020:
	{
		// if (!this.VoiceConnectAndFollowFusion())
		bool L_6;
		L_6 = FusionVoiceClient_VoiceConnectAndFollowFusion_mA96A689B57A08C88C46E62BAEDEF98A5B41F1AF4(__this, NULL);
		if (L_6)
		{
			goto IL_00c2;
		}
	}
	{
		// this.Logger.LogError("Connecting to server failed.");
		RuntimeObject* L_7;
		L_7 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_7, _stringLiteral09A40D1B7C5BF8AAC4E83B40EBD90FF52C861E55, L_8);
		// break;
		return;
	}

IL_0041:
	{
		// if (!this.VoiceJoinMirroringRoom())
		bool L_9;
		L_9 = FusionVoiceClient_VoiceJoinMirroringRoom_m1E799F80536C9E53CBB48FCC512B77E4063A3F6A(__this, NULL);
		if (L_9)
		{
			goto IL_00c2;
		}
	}
	{
		// this.Logger.LogError("Joining a voice room failed.");
		RuntimeObject* L_10;
		L_10 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
		L_11 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_10, _stringLiteral9E18A432BCD116096E8D0F03E0E8A8A2AE263F2A, L_11);
		// break;
		return;
	}

IL_005f:
	{
		// string expectedRoomName = this.VoiceGetMirroringRoomName();
		String_t* L_12;
		L_12 = FusionVoiceClient_VoiceGetMirroringRoomName_m11F879D94726E71E3BA8C223FC1E267F4CD20321(__this, NULL);
		V_0 = L_12;
		// string currentRoomName = this.Client.CurrentRoom.Name;
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_13;
		L_13 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_13);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_14;
		L_14 = LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline(L_13, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Room_get_Name_m8C466150335A007F72B11711AB64F9F62288D500_inline(L_14, NULL);
		V_1 = L_15;
		// if (!currentRoomName.Equals(expectedRoomName))
		String_t* L_16 = V_1;
		String_t* L_17 = V_0;
		NullCheck(L_16);
		bool L_18;
		L_18 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_16, L_17, NULL);
		if (L_18)
		{
			goto IL_00c2;
		}
	}
	{
		// this.Logger.LogWarning("Voice room mismatch: Expected:\"{0}\" Current:\"{1}\", leaving the second to join the first.", expectedRoomName, currentRoomName);
		RuntimeObject* L_19;
		L_19 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
		String_t* L_22 = V_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_21;
		String_t* L_24 = V_1;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_24);
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_19, _stringLiteralBBBF549D0FA6EF293724A95ADA890AE4CABDC7CE, L_23);
		// if (!this.Client.OpLeaveRoom(false))
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_25;
		L_25 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_25);
		bool L_26;
		L_26 = LoadBalancingClient_OpLeaveRoom_m7537326F58896C437BC18C40657D698602D46DA1(L_25, (bool)0, (bool)0, NULL);
		if (L_26)
		{
			goto IL_00c2;
		}
	}
	{
		// this.Logger.LogError("Leaving the current voice room failed.");
		RuntimeObject* L_27;
		L_27 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28;
		L_28 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_27);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_27, _stringLiteral5B7BDCD055E8976EC2783C6D6E53B0E590E60488, L_28);
	}

IL_00c2:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Fusion.FusionVoiceClient::VoiceConnectAndFollowFusion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FusionVoiceClient_VoiceConnectAndFollowFusion_mA96A689B57A08C88C46E62BAEDEF98A5B41F1AF4 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43023C035D076BECC683C71A78CC6E438209FB26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6407F78FF6FC02B02B078DDE03272E67FF8D1824);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC915477274D5051B6D25B57482BCBE932383C12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE33820DF1B09A427B46419490D10ED57F16E1C1E);
		s_Il2CppMethodInitialized = true;
	}
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* V_0 = NULL;
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	String_t* V_3 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_4 = NULL;
	{
		// AppSettings settings = new AppSettings();
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_0 = (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7*)il2cpp_codegen_object_new(AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AppSettings__ctor_m0E9EF98D6C1FB02C989504407836FDA2B019AA43(L_0, NULL);
		V_0 = L_0;
		// if (this.UseFusionAppSettings)
		bool L_1 = __this->___UseFusionAppSettings_37;
		if (!L_1)
		{
			goto IL_0116;
		}
	}
	{
		// settings.AppIdVoice = PhotonAppSettings.Instance.AppSettings.AppIdVoice;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_2 = V_0;
		PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD* L_3;
		L_3 = PhotonAppSettings_get_Instance_m8F359CEB5746EF5903136E1E6F4A24D19007961D(NULL);
		NullCheck(L_3);
		AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* L_4 = L_3->___AppSettings_4;
		NullCheck(L_4);
		String_t* L_5 = L_4->___AppIdVoice_3;
		NullCheck(L_2);
		L_2->___AppIdVoice_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___AppIdVoice_3), (void*)L_5);
		// settings.AppVersion = PhotonAppSettings.Instance.AppSettings.AppVersion;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_6 = V_0;
		PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD* L_7;
		L_7 = PhotonAppSettings_get_Instance_m8F359CEB5746EF5903136E1E6F4A24D19007961D(NULL);
		NullCheck(L_7);
		AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* L_8 = L_7->___AppSettings_4;
		NullCheck(L_8);
		String_t* L_9 = L_8->___AppVersion_4;
		NullCheck(L_6);
		L_6->___AppVersion_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___AppVersion_4), (void*)L_9);
		// settings.FixedRegion = PhotonAppSettings.Instance.AppSettings.FixedRegion;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_10 = V_0;
		PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD* L_11;
		L_11 = PhotonAppSettings_get_Instance_m8F359CEB5746EF5903136E1E6F4A24D19007961D(NULL);
		NullCheck(L_11);
		AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* L_12 = L_11->___AppSettings_4;
		NullCheck(L_12);
		String_t* L_13 = L_12->___FixedRegion_6;
		NullCheck(L_10);
		L_10->___FixedRegion_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___FixedRegion_6), (void*)L_13);
		// settings.UseNameServer = PhotonAppSettings.Instance.AppSettings.UseNameServer;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_14 = V_0;
		PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD* L_15;
		L_15 = PhotonAppSettings_get_Instance_m8F359CEB5746EF5903136E1E6F4A24D19007961D(NULL);
		NullCheck(L_15);
		AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* L_16 = L_15->___AppSettings_4;
		NullCheck(L_16);
		bool L_17 = L_16->___UseNameServer_5;
		NullCheck(L_14);
		L_14->___UseNameServer_5 = L_17;
		// settings.Server = PhotonAppSettings.Instance.AppSettings.Server;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_18 = V_0;
		PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD* L_19;
		L_19 = PhotonAppSettings_get_Instance_m8F359CEB5746EF5903136E1E6F4A24D19007961D(NULL);
		NullCheck(L_19);
		AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* L_20 = L_19->___AppSettings_4;
		NullCheck(L_20);
		String_t* L_21 = L_20->___Server_8;
		NullCheck(L_18);
		L_18->___Server_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___Server_8), (void*)L_21);
		// settings.Port = PhotonAppSettings.Instance.AppSettings.Port;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_22 = V_0;
		PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD* L_23;
		L_23 = PhotonAppSettings_get_Instance_m8F359CEB5746EF5903136E1E6F4A24D19007961D(NULL);
		NullCheck(L_23);
		AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* L_24 = L_23->___AppSettings_4;
		NullCheck(L_24);
		int32_t L_25 = L_24->___Port_9;
		NullCheck(L_22);
		L_22->___Port_9 = L_25;
		// settings.ProxyServer = PhotonAppSettings.Instance.AppSettings.ProxyServer;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_26 = V_0;
		PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD* L_27;
		L_27 = PhotonAppSettings_get_Instance_m8F359CEB5746EF5903136E1E6F4A24D19007961D(NULL);
		NullCheck(L_27);
		AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* L_28 = L_27->___AppSettings_4;
		NullCheck(L_28);
		String_t* L_29 = L_28->___ProxyServer_10;
		NullCheck(L_26);
		L_26->___ProxyServer_10 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___ProxyServer_10), (void*)L_29);
		// settings.BestRegionSummaryFromStorage = PhotonAppSettings.Instance.AppSettings.BestRegionSummaryFromStorage;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_30 = V_0;
		PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD* L_31;
		L_31 = PhotonAppSettings_get_Instance_m8F359CEB5746EF5903136E1E6F4A24D19007961D(NULL);
		NullCheck(L_31);
		AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* L_32 = L_31->___AppSettings_4;
		NullCheck(L_32);
		String_t* L_33 = L_32->___BestRegionSummaryFromStorage_7;
		NullCheck(L_30);
		L_30->___BestRegionSummaryFromStorage_7 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->___BestRegionSummaryFromStorage_7), (void*)L_33);
		// settings.EnableLobbyStatistics = false;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_34 = V_0;
		NullCheck(L_34);
		L_34->___EnableLobbyStatistics_14 = (bool)0;
		// settings.EnableProtocolFallback = PhotonAppSettings.Instance.AppSettings.EnableProtocolFallback;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_35 = V_0;
		PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD* L_36;
		L_36 = PhotonAppSettings_get_Instance_m8F359CEB5746EF5903136E1E6F4A24D19007961D(NULL);
		NullCheck(L_36);
		AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* L_37 = L_36->___AppSettings_4;
		NullCheck(L_37);
		bool L_38 = L_37->___EnableProtocolFallback_12;
		NullCheck(L_35);
		L_35->___EnableProtocolFallback_12 = L_38;
		// settings.Protocol = PhotonAppSettings.Instance.AppSettings.Protocol;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_39 = V_0;
		PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD* L_40;
		L_40 = PhotonAppSettings_get_Instance_m8F359CEB5746EF5903136E1E6F4A24D19007961D(NULL);
		NullCheck(L_40);
		AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* L_41 = L_40->___AppSettings_4;
		NullCheck(L_41);
		uint8_t L_42 = L_41->___Protocol_11;
		NullCheck(L_39);
		L_39->___Protocol_11 = L_42;
		// settings.AuthMode = (AuthModeOption)(int)PhotonAppSettings.Instance.AppSettings.AuthMode;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_43 = V_0;
		PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD* L_44;
		L_44 = PhotonAppSettings_get_Instance_m8F359CEB5746EF5903136E1E6F4A24D19007961D(NULL);
		NullCheck(L_44);
		AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* L_45 = L_44->___AppSettings_4;
		NullCheck(L_45);
		int32_t L_46 = L_45->___AuthMode_13;
		NullCheck(L_43);
		L_43->___AuthMode_13 = L_46;
		// settings.NetworkLogging = PhotonAppSettings.Instance.AppSettings.NetworkLogging;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_47 = V_0;
		PhotonAppSettings_t146FA38CCBFF1AA63AEFA501765C77A5A65624FD* L_48;
		L_48 = PhotonAppSettings_get_Instance_m8F359CEB5746EF5903136E1E6F4A24D19007961D(NULL);
		NullCheck(L_48);
		AppSettings_t676479963A7FA399B63DD6E77830C334B7900E84* L_49 = L_48->___AppSettings_4;
		NullCheck(L_49);
		uint8_t L_50 = L_49->___NetworkLogging_15;
		NullCheck(L_47);
		L_47->___NetworkLogging_15 = L_50;
		goto IL_0123;
	}

IL_0116:
	{
		// this.Settings.CopyTo(settings);
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_51 = ((VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3*)__this)->___Settings_29;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_52 = V_0;
		NullCheck(L_51);
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_53;
		L_53 = AppSettings_CopyTo_mE304EF3079424281AC51411AB237969412FD6F93(L_51, L_52, NULL);
	}

IL_0123:
	{
		// string fusionRegion = this.networkRunner.SessionInfo.Region;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_54 = __this->___networkRunner_35;
		NullCheck(L_54);
		SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB* L_55;
		L_55 = NetworkRunner_get_SessionInfo_m8E7EDE44DB7D97AA9573EA0CB1C9BC0761D8F867_inline(L_54, NULL);
		NullCheck(L_55);
		String_t* L_56;
		L_56 = SessionInfo_get_Region_m979863C8A75595985C638ECCE43174E955DBFDE0_inline(L_55, NULL);
		V_1 = L_56;
		// if (string.IsNullOrEmpty(fusionRegion))
		String_t* L_57 = V_1;
		bool L_58;
		L_58 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_57, NULL);
		if (!L_58)
		{
			goto IL_0189;
		}
	}
	{
		// this.Logger.LogWarning("Unexpected: fusion region is empty.");
		RuntimeObject* L_59;
		L_59 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60;
		L_60 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_59);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_59, _stringLiteralE33820DF1B09A427B46419490D10ED57F16E1C1E, L_60);
		// if (!string.IsNullOrEmpty(settings.FixedRegion))
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_61 = V_0;
		NullCheck(L_61);
		String_t* L_62 = L_61->___FixedRegion_6;
		bool L_63;
		L_63 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_62, NULL);
		if (L_63)
		{
			goto IL_01eb;
		}
	}
	{
		// this.Logger.LogWarning("Unexpected: fusion region is empty while voice region is set to \"{0}\". Setting it to null now.", settings.FixedRegion);
		RuntimeObject* L_64;
		L_64 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_65 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_66 = L_65;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_67 = V_0;
		NullCheck(L_67);
		String_t* L_68 = L_67->___FixedRegion_6;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_68);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_68);
		NullCheck(L_64);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_64, _stringLiteral6407F78FF6FC02B02B078DDE03272E67FF8D1824, L_66);
		// settings.FixedRegion = null;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_69 = V_0;
		NullCheck(L_69);
		L_69->___FixedRegion_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_69->___FixedRegion_6), (void*)(String_t*)NULL);
		goto IL_01eb;
	}

IL_0189:
	{
		// else if (!string.Equals(settings.FixedRegion, fusionRegion, StringComparison.OrdinalIgnoreCase))
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_70 = V_0;
		NullCheck(L_70);
		String_t* L_71 = L_70->___FixedRegion_6;
		String_t* L_72 = V_1;
		bool L_73;
		L_73 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_71, L_72, 5, NULL);
		if (L_73)
		{
			goto IL_01eb;
		}
	}
	{
		// if (string.IsNullOrEmpty(settings.FixedRegion))
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = L_74->___FixedRegion_6;
		bool L_76;
		L_76 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_75, NULL);
		if (!L_76)
		{
			goto IL_01c1;
		}
	}
	{
		// this.Logger.LogInfo("Setting voice region to \"{0}\" to match fusion region.", fusionRegion);
		RuntimeObject* L_77;
		L_77 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_79 = L_78;
		String_t* L_80 = V_1;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, L_80);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_80);
		NullCheck(L_77);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_77, _stringLiteral43023C035D076BECC683C71A78CC6E438209FB26, L_79);
		goto IL_01e4;
	}

IL_01c1:
	{
		// this.Logger.LogInfo("Switching voice region to \"{0}\" from \"{1}\" to match fusion region.", fusionRegion, settings.FixedRegion);
		RuntimeObject* L_81;
		L_81 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_82 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_83 = L_82;
		String_t* L_84 = V_1;
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, L_84);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_84);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_85 = L_83;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_86 = V_0;
		NullCheck(L_86);
		String_t* L_87 = L_86->___FixedRegion_6;
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, L_87);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_87);
		NullCheck(L_81);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_81, _stringLiteralDC915477274D5051B6D25B57482BCBE932383C12, L_85);
	}

IL_01e4:
	{
		// settings.FixedRegion = fusionRegion;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_88 = V_0;
		String_t* L_89 = V_1;
		NullCheck(L_88);
		L_88->___FixedRegion_6 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&L_88->___FixedRegion_6), (void*)L_89);
	}

IL_01eb:
	{
		// if (this.UseFusionAuthValues && this.networkRunner.AuthenticationValues != null)
		bool L_90 = __this->___UseFusionAuthValues_38;
		if (!L_90)
		{
			goto IL_02ed;
		}
	}
	{
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_91 = __this->___networkRunner_35;
		NullCheck(L_91);
		AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* L_92;
		L_92 = NetworkRunner_get_AuthenticationValues_m2D8D90A54E0CB933C0515364C41836A07CEDB0C7(L_91, NULL);
		if (!L_92)
		{
			goto IL_02ed;
		}
	}
	{
		// this.Client.AuthValues = new AuthenticationValues(this.networkRunner.AuthenticationValues.UserId)
		// {
		//     AuthGetParameters = this.networkRunner.AuthenticationValues.AuthGetParameters,
		//     AuthType = (CustomAuthenticationType)(int)this.networkRunner.AuthenticationValues.AuthType
		// };
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_93;
		L_93 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_94 = __this->___networkRunner_35;
		NullCheck(L_94);
		AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* L_95;
		L_95 = NetworkRunner_get_AuthenticationValues_m2D8D90A54E0CB933C0515364C41836A07CEDB0C7(L_94, NULL);
		NullCheck(L_95);
		String_t* L_96;
		L_96 = AuthenticationValues_get_UserId_m3E453140CA632A1F55A0BB96ECA5F61A878F838E_inline(L_95, NULL);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_97 = (AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7*)il2cpp_codegen_object_new(AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7_il2cpp_TypeInfo_var);
		NullCheck(L_97);
		AuthenticationValues__ctor_mB9476858AE6869B09BACEB0BBBE1A6670B5710F8(L_97, L_96, NULL);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_98 = L_97;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_99 = __this->___networkRunner_35;
		NullCheck(L_99);
		AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* L_100;
		L_100 = NetworkRunner_get_AuthenticationValues_m2D8D90A54E0CB933C0515364C41836A07CEDB0C7(L_99, NULL);
		NullCheck(L_100);
		String_t* L_101;
		L_101 = AuthenticationValues_get_AuthGetParameters_mFD417A06D769F51083D11C4BC6F7C2B698095232_inline(L_100, NULL);
		NullCheck(L_98);
		AuthenticationValues_set_AuthGetParameters_m1414AD92FAC10BA328BF31068ED47CB16ECF0E07_inline(L_98, L_101, NULL);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_102 = L_98;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_103 = __this->___networkRunner_35;
		NullCheck(L_103);
		AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* L_104;
		L_104 = NetworkRunner_get_AuthenticationValues_m2D8D90A54E0CB933C0515364C41836A07CEDB0C7(L_103, NULL);
		NullCheck(L_104);
		uint8_t L_105;
		L_105 = AuthenticationValues_get_AuthType_mFBE279F7D91B4721D1F660F1D336A574DD9BDD7C(L_104, NULL);
		NullCheck(L_102);
		AuthenticationValues_set_AuthType_m56996D622EEB81A2482DDCDCB1459EE56FE332EE_inline(L_102, ((int32_t)(uint8_t)L_105), NULL);
		NullCheck(L_93);
		LoadBalancingClient_set_AuthValues_mAFB66C3CFA04587CBA1A60711581B2BA6C6FD84C_inline(L_93, L_102, NULL);
		// if (this.networkRunner.AuthenticationValues.AuthPostData != null)
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_106 = __this->___networkRunner_35;
		NullCheck(L_106);
		AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* L_107;
		L_107 = NetworkRunner_get_AuthenticationValues_m2D8D90A54E0CB933C0515364C41836A07CEDB0C7(L_106, NULL);
		NullCheck(L_107);
		RuntimeObject* L_108;
		L_108 = AuthenticationValues_get_AuthPostData_m6193DF5F2347E2E843BE98CC4A27FF1A324D35FE_inline(L_107, NULL);
		if (!L_108)
		{
			goto IL_02ed;
		}
	}
	{
		// if (this.networkRunner.AuthenticationValues.AuthPostData is byte[] byteData)
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_109 = __this->___networkRunner_35;
		NullCheck(L_109);
		AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* L_110;
		L_110 = NetworkRunner_get_AuthenticationValues_m2D8D90A54E0CB933C0515364C41836A07CEDB0C7(L_109, NULL);
		NullCheck(L_110);
		RuntimeObject* L_111;
		L_111 = AuthenticationValues_get_AuthPostData_m6193DF5F2347E2E843BE98CC4A27FF1A324D35FE_inline(L_110, NULL);
		V_2 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_111, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_2;
		if (!L_112)
		{
			goto IL_0294;
		}
	}
	{
		// this.Client.AuthValues.SetAuthPostData(byteData);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_113;
		L_113 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_113);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_114;
		L_114 = LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline(L_113, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = V_2;
		NullCheck(L_114);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.Void Photon.Realtime.AuthenticationValues::SetAuthPostData(System.Byte[]) */, L_114, L_115);
		goto IL_02ed;
	}

IL_0294:
	{
		// else if (this.networkRunner.AuthenticationValues.AuthPostData is string stringData)
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_116 = __this->___networkRunner_35;
		NullCheck(L_116);
		AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* L_117;
		L_117 = NetworkRunner_get_AuthenticationValues_m2D8D90A54E0CB933C0515364C41836A07CEDB0C7(L_116, NULL);
		NullCheck(L_117);
		RuntimeObject* L_118;
		L_118 = AuthenticationValues_get_AuthPostData_m6193DF5F2347E2E843BE98CC4A27FF1A324D35FE_inline(L_117, NULL);
		V_3 = ((String_t*)IsInstSealed((RuntimeObject*)L_118, String_t_il2cpp_TypeInfo_var));
		String_t* L_119 = V_3;
		if (!L_119)
		{
			goto IL_02c0;
		}
	}
	{
		// this.Client.AuthValues.SetAuthPostData(stringData);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_120;
		L_120 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_120);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_121;
		L_121 = LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline(L_120, NULL);
		String_t* L_122 = V_3;
		NullCheck(L_121);
		VirtualActionInvoker1< String_t* >::Invoke(4 /* System.Void Photon.Realtime.AuthenticationValues::SetAuthPostData(System.String) */, L_121, L_122);
		goto IL_02ed;
	}

IL_02c0:
	{
		// else if (this.networkRunner.AuthenticationValues.AuthPostData is Dictionary<string, object> dictData)
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_123 = __this->___networkRunner_35;
		NullCheck(L_123);
		AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* L_124;
		L_124 = NetworkRunner_get_AuthenticationValues_m2D8D90A54E0CB933C0515364C41836A07CEDB0C7(L_123, NULL);
		NullCheck(L_124);
		RuntimeObject* L_125;
		L_125 = AuthenticationValues_get_AuthPostData_m6193DF5F2347E2E843BE98CC4A27FF1A324D35FE_inline(L_124, NULL);
		V_4 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_125, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_126 = V_4;
		if (!L_126)
		{
			goto IL_02ed;
		}
	}
	{
		// this.Client.AuthValues.SetAuthPostData(dictData);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_127;
		L_127 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_127);
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_128;
		L_128 = LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline(L_127, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_129 = V_4;
		NullCheck(L_128);
		VirtualActionInvoker1< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(6 /* System.Void Photon.Realtime.AuthenticationValues::SetAuthPostData(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, L_128, L_129);
	}

IL_02ed:
	{
		// return this.ConnectUsingSettings(settings);
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_130 = V_0;
		bool L_131;
		L_131 = VirtualFuncInvoker1< bool, AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* >::Invoke(7 /* System.Boolean Photon.Voice.Unity.VoiceConnection::ConnectUsingSettings(Photon.Realtime.AppSettings) */, __this, L_130);
		return L_131;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::VoiceDisconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_VoiceDisconnect_m442B861A85DB77A24902B349AFCA273EC8540EE9 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, const RuntimeMethod* method) 
{
	{
		// this.Client.Disconnect();
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_0;
		L_0 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		NullCheck(L_0);
		LoadBalancingClient_Disconnect_m9E92F0FD6E20FA7FCB107FD132A62F6DEEC9AEF8(L_0, ((int32_t)15), NULL);
		// }
		return;
	}
}
// System.Boolean Photon.Voice.Fusion.FusionVoiceClient::VoiceJoinRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FusionVoiceClient_VoiceJoinRoom_m8838A19F1A5653EBD25D4FF8674261DF1F87FB69 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, String_t* ___0_voiceRoomName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3719DC7FB393EC6A0A18F97B5ACA5A75ED8480B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(voiceRoomName))
		String_t* L_0 = ___0_voiceRoomName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// this.Logger.LogError("Voice room name is null or empty.");
		RuntimeObject* L_2;
		L_2 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_2, _stringLiteralD3719DC7FB393EC6A0A18F97B5ACA5A75ED8480B, L_3);
		// return false;
		return (bool)0;
	}

IL_001f:
	{
		// this.voiceRoomParams.RoomName = voiceRoomName;
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_4 = __this->___voiceRoomParams_36;
		String_t* L_5 = ___0_voiceRoomName;
		NullCheck(L_4);
		L_4->___RoomName_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___RoomName_0), (void*)L_5);
		// return this.Client.OpJoinOrCreateRoom(this.voiceRoomParams);
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_6;
		L_6 = VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline(__this, NULL);
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_7 = __this->___voiceRoomParams_36;
		NullCheck(L_6);
		bool L_8;
		L_8 = LoadBalancingClient_OpJoinOrCreateRoom_m09D399AF025F96C6CD7E93EB2F4C2EE3600CE26F(L_6, L_7, NULL);
		return L_8;
	}
}
// System.Boolean Photon.Voice.Fusion.FusionVoiceClient::VoiceJoinMirroringRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FusionVoiceClient_VoiceJoinMirroringRoom_m1E799F80536C9E53CBB48FCC512B77E4063A3F6A (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, const RuntimeMethod* method) 
{
	{
		// return this.VoiceJoinRoom(this.VoiceGetMirroringRoomName());
		String_t* L_0;
		L_0 = FusionVoiceClient_VoiceGetMirroringRoomName_m11F879D94726E71E3BA8C223FC1E267F4CD20321(__this, NULL);
		bool L_1;
		L_1 = FusionVoiceClient_VoiceJoinRoom_m8838A19F1A5653EBD25D4FF8674261DF1F87FB69(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::VoiceRegisterCustomTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_VoiceRegisterCustomTypes_m5B57FDA6F5007E94C17054141FFA64D07063EDEC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeserializeStreamMethod_tC0EA7F2D58AD1B0A85B30C169AAEBD600889E448_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionVoiceClient_DeserializeFusionNetworkId_mEE358D5EB3AB3F64907D3BFAD26D0CE5BA2517E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionVoiceClient_SerializeFusionNetworkId_m8017F18168B4EA8AF9D7E0F16C8DE2112DE6A5D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializeStreamMethod_tE9A207ADBB74A63C939A741C47F75676E0A82BEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonPeer.RegisterType(typeof(NetworkId), FusionNetworkIdTypeCode, SerializeFusionNetworkId, DeserializeFusionNetworkId);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		SerializeStreamMethod_tE9A207ADBB74A63C939A741C47F75676E0A82BEF* L_2 = (SerializeStreamMethod_tE9A207ADBB74A63C939A741C47F75676E0A82BEF*)il2cpp_codegen_object_new(SerializeStreamMethod_tE9A207ADBB74A63C939A741C47F75676E0A82BEF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SerializeStreamMethod__ctor_m5376C1328841C387EBC8F69D049E5996F8769DAE(L_2, NULL, (intptr_t)((void*)FusionVoiceClient_SerializeFusionNetworkId_m8017F18168B4EA8AF9D7E0F16C8DE2112DE6A5D5_RuntimeMethod_var), NULL);
		DeserializeStreamMethod_tC0EA7F2D58AD1B0A85B30C169AAEBD600889E448* L_3 = (DeserializeStreamMethod_tC0EA7F2D58AD1B0A85B30C169AAEBD600889E448*)il2cpp_codegen_object_new(DeserializeStreamMethod_tC0EA7F2D58AD1B0A85B30C169AAEBD600889E448_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DeserializeStreamMethod__ctor_mAC6E216CA62F8C560F91E692482D952FD6CCB9A8(L_3, NULL, (intptr_t)((void*)FusionVoiceClient_DeserializeFusionNetworkId_mEE358D5EB3AB3F64907D3BFAD26D0CE5BA2517E5_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = PhotonPeer_RegisterType_mEA2D37BB629046E08937932BFEB961C4DDE95CBC(L_1, (uint8_t)0, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Object Photon.Voice.Fusion.FusionVoiceClient::DeserializeFusionNetworkId(ExitGames.Client.Photon.StreamBuffer,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FusionVoiceClient_DeserializeFusionNetworkId_mEE358D5EB3AB3F64907D3BFAD26D0CE5BA2517E5 (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* ___0_instream, int16_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	uint64_t V_3 = 0;
	{
		// NetworkId networkId = new NetworkId();
		il2cpp_codegen_initobj((&V_0), sizeof(NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2));
		// lock (memCompressedUInt64)
		il2cpp_codegen_runtime_class_init_inline(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_StaticFields*)il2cpp_codegen_static_fields_for(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var))->___memCompressedUInt64_40;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_0033;
					}
				}
				{
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0033:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_2), NULL);
			// ulong ul = ReadCompressedUInt64(instream);
			StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_4 = ___0_instream;
			il2cpp_codegen_runtime_class_init_inline(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var);
			uint64_t L_5;
			L_5 = FusionVoiceClient_ReadCompressedUInt64_mF25CF9FA9AC9D3DBD3D813CF1D93E7ED4FBCD9AC(L_4, NULL);
			V_3 = L_5;
			// networkId.Raw = (uint)ul;
			uint64_t L_6 = V_3;
			(&V_0)->___Raw_4 = ((int32_t)(uint32_t)L_6);
			// }
			goto IL_0034;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0034:
	{
		// return networkId;
		NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 L_7 = V_0;
		NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 L_8 = L_7;
		RuntimeObject* L_9 = Box(NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}
}
// System.UInt64 Photon.Voice.Fusion.FusionVoiceClient::ReadCompressedUInt64(ExitGames.Client.Photon.StreamBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t FusionVoiceClient_ReadCompressedUInt64_mF25CF9FA9AC9D3DBD3D813CF1D93E7ED4FBCD9AC (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* ___0_stream, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		// ulong value = 0;
		V_0 = ((int64_t)0);
		// int shift = 0;
		V_1 = 0;
		// byte[] data = stream.GetBuffer();
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_0 = ___0_stream;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = StreamBuffer_GetBuffer_mB347ABAE3E9F1FD59A8657B965D85CB4AE8C2479(L_0, NULL);
		V_2 = L_1;
		// int offset = stream.Position;
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_2 = ___0_stream;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = StreamBuffer_get_Position_m61D98C2FFB37B4FEEDC2790FD8E432B004FB47F4(L_2, NULL);
		V_3 = L_3;
		goto IL_004b;
	}

IL_0015:
	{
		// if (offset >= data.Length)
		int32_t L_4 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		NullCheck(L_5);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		// throw new System.IO.EndOfStreamException("Failed to read full ulong.");
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_6 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		EndOfStreamException__ctor_m5629E1A514051A3D56052BD6D2D50C054308CCA4(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAED2FF7635BF6E5A981B193252E733A74E9F82A9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FusionVoiceClient_ReadCompressedUInt64_mF25CF9FA9AC9D3DBD3D813CF1D93E7ED4FBCD9AC_RuntimeMethod_var)));
	}

IL_0026:
	{
		// byte b = data[offset];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// offset++;
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// value |= (ulong)(b & 0x7F) << shift;
		uint64_t L_12 = V_0;
		uint8_t L_13 = V_4;
		int32_t L_14 = V_1;
		V_0 = ((int64_t)((int64_t)L_12|((int64_t)(((int64_t)((int32_t)((int32_t)L_13&((int32_t)127))))<<((int32_t)(L_14&((int32_t)63)))))));
		// shift += 7;
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 7));
		// if ((b & 0x80) == 0)
		uint8_t L_16 = V_4;
		if (!((int32_t)((int32_t)L_16&((int32_t)128))))
		{
			goto IL_0050;
		}
	}

IL_004b:
	{
		// while (shift != 70)
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)70)))))
		{
			goto IL_0015;
		}
	}

IL_0050:
	{
		// stream.Position = offset;
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_18 = ___0_stream;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		StreamBuffer_set_Position_mE4F84AAB7F10D3EAA4639CFC26CB45C0EF7C6460(L_18, L_19, NULL);
		// return value;
		uint64_t L_20 = V_0;
		return L_20;
	}
}
// System.Int32 Photon.Voice.Fusion.FusionVoiceClient::WriteCompressedUInt64(ExitGames.Client.Photon.StreamBuffer,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FusionVoiceClient_WriteCompressedUInt64_m3A9E99F301AE16E546E7495FF47E1F28AC6DE719 (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* ___0_stream, uint64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	{
		// int count = 0;
		V_0 = 0;
		// lock (memCompressedUInt64)
		il2cpp_codegen_runtime_class_init_inline(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_StaticFields*)il2cpp_codegen_static_fields_for(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var))->___memCompressedUInt64_40;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_0072;
					}
				}
				{
					ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0072:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_2), NULL);
				// memCompressedUInt64[count] = (byte)(value & 0x7F);
				il2cpp_codegen_runtime_class_init_inline(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_StaticFields*)il2cpp_codegen_static_fields_for(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var))->___memCompressedUInt64_40;
				int32_t L_5 = V_0;
				uint64_t L_6 = ___1_value;
				NullCheck(L_4);
				(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int64_t)((int64_t)L_6&((int64_t)((int32_t)127))))));
				// value = value >> 7;
				uint64_t L_7 = ___1_value;
				___1_value = ((int64_t)((uint64_t)L_7>>7));
				goto IL_0051_1;
			}

IL_0026_1:
			{
				// memCompressedUInt64[count] |= 0x80;
				il2cpp_codegen_runtime_class_init_inline(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_StaticFields*)il2cpp_codegen_static_fields_for(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var))->___memCompressedUInt64_40;
				int32_t L_9 = V_0;
				NullCheck(L_8);
				uint8_t* L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)));
				int32_t L_11 = *((uint8_t*)L_10);
				*((int8_t*)L_10) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_11|((int32_t)128))));
				// memCompressedUInt64[++count] = (byte)(value & 0x7F);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_StaticFields*)il2cpp_codegen_static_fields_for(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var))->___memCompressedUInt64_40;
				int32_t L_13 = V_0;
				int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
				V_0 = L_14;
				uint64_t L_15 = ___1_value;
				NullCheck(L_12);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)((int32_t)(uint8_t)((int64_t)((int64_t)L_15&((int64_t)((int32_t)127))))));
				// value = value >> 7;
				uint64_t L_16 = ___1_value;
				___1_value = ((int64_t)((uint64_t)L_16>>7));
			}

IL_0051_1:
			{
				// while (value > 0)
				uint64_t L_17 = ___1_value;
				if ((!(((uint64_t)L_17) <= ((uint64_t)((int64_t)0)))))
				{
					goto IL_0026_1;
				}
			}
			{
				// count++;
				int32_t L_18 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
				// stream.Write(memCompressedUInt64, 0, count);
				StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_19 = ___0_stream;
				il2cpp_codegen_runtime_class_init_inline(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ((FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_StaticFields*)il2cpp_codegen_static_fields_for(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var))->___memCompressedUInt64_40;
				int32_t L_21 = V_0;
				NullCheck(L_19);
				StreamBuffer_Write_mB8F9B0B3609D1304433FBF99468A5F6807BBC1AE(L_19, L_20, 0, L_21, NULL);
				// }
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		// return count;
		int32_t L_22 = V_0;
		return L_22;
	}
}
// System.Int16 Photon.Voice.Fusion.FusionVoiceClient::SerializeFusionNetworkId(ExitGames.Client.Photon.StreamBuffer,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t FusionVoiceClient_SerializeFusionNetworkId_m8017F18168B4EA8AF9D7E0F16C8DE2112DE6A5D5 (StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* ___0_outstream, RuntimeObject* ___1_customobject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// NetworkId networkId = (NetworkId) customobject;
		RuntimeObject* L_0 = ___1_customobject;
		V_0 = ((*(NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2*)((NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2*)(NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2*)UnBox(L_0, NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_il2cpp_TypeInfo_var))));
		// return (short)WriteCompressedUInt64(outstream, networkId.Raw);
		StreamBuffer_tE57C7EEE4C12F51CE0B37E8C4FD1040EB5ED63FB* L_1 = ___0_outstream;
		NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 L_2 = V_0;
		uint32_t L_3 = L_2.___Raw_4;
		il2cpp_codegen_runtime_class_init_inline(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = FusionVoiceClient_WriteCompressedUInt64_m3A9E99F301AE16E546E7495FF47E1F28AC6DE719(L_1, ((int64_t)(uint64_t)L_3), NULL);
		return ((int16_t)L_4);
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnPlayerJoined(Fusion.NetworkRunner,Fusion.PlayerRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnPlayerJoined_mF88E74DF260BB0FA7A51997C15D94784EB25A98B (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___1_player, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2021EEC5093E109FBE29B93E6083AE29559BE754);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBFC04345F5C1A5B3A25AF8435C3BE62C7C1C327);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Logger.LogInfo("OnPlayerJoined {0}", player);
		RuntimeObject* L_0;
		L_0 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC L_3 = ___1_player;
		PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC L_4 = L_3;
		RuntimeObject* L_5 = Box(PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_0, _stringLiteral2021EEC5093E109FBE29B93E6083AE29559BE754, L_2);
		// if (runner.LocalPlayer == player)
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_6 = ___0_runner;
		NullCheck(L_6);
		PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC L_7;
		L_7 = NetworkRunner_get_LocalPlayer_mC7AB05AEC180A8376D2667583C90F88FE8DB28F7(L_6, NULL);
		PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC L_8 = ___1_player;
		bool L_9;
		L_9 = PlayerRef_op_Equality_mDE02A4E3B6FC2CE8E570A1DFE9A4A58965CDDFB0_inline(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		// this.Logger.LogInfo("Local player joined, calling VoiceConnectOrJoinRoom");
		RuntimeObject* L_10;
		L_10 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
		L_11 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_10, _stringLiteralEBFC04345F5C1A5B3A25AF8435C3BE62C7C1C327, L_11);
		// this.VoiceConnectOrJoinRoom();
		FusionVoiceClient_VoiceConnectOrJoinRoom_mE0AB72A8F8C4716E019A6DE3BC0ED641F729F583(__this, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnPlayerLeft(Fusion.NetworkRunner,Fusion.PlayerRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnPlayerLeft_m9AE16235F6272F0545DC4D471BA815351DF160B9 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___1_player, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22E8580B15C9ABAB56DCCB69459657318094F648);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCFFF9B2A3BCF29E6CC02A03E2DD7754F02EB1E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Logger.LogInfo("OnPlayerLeft {0}", player);
		RuntimeObject* L_0;
		L_0 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC L_3 = ___1_player;
		PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC L_4 = L_3;
		RuntimeObject* L_5 = Box(PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_0, _stringLiteral22E8580B15C9ABAB56DCCB69459657318094F648, L_2);
		// if (runner.LocalPlayer == player)
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_6 = ___0_runner;
		NullCheck(L_6);
		PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC L_7;
		L_7 = NetworkRunner_get_LocalPlayer_mC7AB05AEC180A8376D2667583C90F88FE8DB28F7(L_6, NULL);
		PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC L_8 = ___1_player;
		bool L_9;
		L_9 = PlayerRef_op_Equality_mDE02A4E3B6FC2CE8E570A1DFE9A4A58965CDDFB0_inline(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		// this.Logger.LogInfo("Local player left, calling VoiceDisconnect");
		RuntimeObject* L_10;
		L_10 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
		L_11 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_10, _stringLiteralCCFFF9B2A3BCF29E6CC02A03E2DD7754F02EB1E5, L_11);
		// this.VoiceDisconnect();
		FusionVoiceClient_VoiceDisconnect_m442B861A85DB77A24902B349AFCA273EC8540EE9(__this, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnInput(Fusion.NetworkRunner,Fusion.NetworkInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnInput_m8F59A10CC4C39970848F9904EFAA5876FF4F2879 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, NetworkInput_t8FB09045785B1BAE178F157ACE2B24EEC7E31231 ___1_input, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnInputMissing(Fusion.NetworkRunner,Fusion.PlayerRef,Fusion.NetworkInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnInputMissing_mBF52BBC8B85CE52840B9308C239032DE2B4C4F86 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___1_player, NetworkInput_t8FB09045785B1BAE178F157ACE2B24EEC7E31231 ___2_input, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnShutdown(Fusion.NetworkRunner,Fusion.ShutdownReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnShutdown_mCF114324AB856636FEED27C4D21D79D50A5F1683 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, int32_t ___1_shutdownReason, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnConnectedToServer(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnConnectedToServer_m809A2475F0530802AD6984BCE08EC6636114B6DC (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, const RuntimeMethod* method) 
{
	{
		// this.VoiceConnectOrJoinRoom();
		FusionVoiceClient_VoiceConnectOrJoinRoom_mE0AB72A8F8C4716E019A6DE3BC0ED641F729F583(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnDisconnectedFromServer(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer_m1513DE1BD5CB2721D6BAFC65CB3C285A849B649D (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA55D7D90A61A79E4DC59B29EAD345F208DE1E20);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Logger.LogInfo("OnDisconnectedFromServer, calling VoiceDisconnect");
		RuntimeObject* L_0;
		L_0 = VoiceConnection_get_Logger_m7446F33A34958679EB2AD1DFDC07148CA79F29A8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_0, _stringLiteralAA55D7D90A61A79E4DC59B29EAD345F208DE1E20, L_1);
		// this.VoiceDisconnect();
		FusionVoiceClient_VoiceDisconnect_m442B861A85DB77A24902B349AFCA273EC8540EE9(__this, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnConnectRequest(Fusion.NetworkRunner,Fusion.NetworkRunnerCallbackArgs/ConnectRequest,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnConnectRequest_m35084A1E1E77C8CB55224819B0D33CE09B37B5A6 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, ConnectRequest_t0B36E883FB21681399384CF1BA965DC577148B66* ___1_request, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_token, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnConnectFailed(Fusion.NetworkRunner,Fusion.Sockets.NetAddress,Fusion.Sockets.NetConnectFailedReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnConnectFailed_m112CBD764A4A0922C0062D5BE6CBBEDA7FF98A23 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, NetAddress_t2F585AC7C9A03E60B16A9E6E8E88A330A8283678 ___1_remoteAddress, uint8_t ___2_reason, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage(Fusion.NetworkRunner,Fusion.SimulationMessagePtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage_m910801115F230DD296861CF0E3508933256EADF9 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, SimulationMessagePtr_tADE4FF081CDDA852A76EA6701476D3167449C8FB ___1_message, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnSessionListUpdated(Fusion.NetworkRunner,System.Collections.Generic.List`1<Fusion.SessionInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnSessionListUpdated_m234973B2A932F59E12EF7C6A9387D0F2862D7270 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, List_1_t1401F7FA1DF1659F914B5A8D1A6B07E195A110AA* ___1_sessionList, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse(Fusion.NetworkRunner,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse_mF1F6999593A7FCB5B2F2B76E00CE49EBF409F2BF (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_data, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnHostMigration(Fusion.NetworkRunner,Fusion.HostMigrationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnHostMigration_m667DBEC5339602D6CE3F1A2276A1E423210B228F (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, HostMigrationToken_t6249F7ADB7BFF0D8D26E524E085F3912BAA2952D* ___1_hostMigrationToken, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnReliableDataReceived(Fusion.NetworkRunner,Fusion.PlayerRef,System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnReliableDataReceived_mC65D34857C79CBF49E5A9E51A04FDA3F3B477484 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___1_player, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___2_data, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnSceneLoadDone(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnSceneLoadDone_m9B2BCA7447EBFB32ECE8F45D044C01C14385D2CD (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::Fusion.INetworkRunnerCallbacks.OnSceneLoadStart(Fusion.NetworkRunner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient_Fusion_INetworkRunnerCallbacks_OnSceneLoadStart_m2798232364A62DFC7DFA1FF43A63DCBD21DDA611 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient__ctor_m89B6008A2EB7005454ECE1C23BDE09AFA85386B4 (FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private EnterRoomParams voiceRoomParams = new EnterRoomParams
		// {
		//     RoomOptions = new RoomOptions { IsVisible = false }
		// };
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_0 = (EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9*)il2cpp_codegen_object_new(EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EnterRoomParams__ctor_m59BB4C9762321F59D7238996F68C7EB970ACDBB8(L_0, NULL);
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_1 = L_0;
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_2 = (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23*)il2cpp_codegen_object_new(RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RoomOptions__ctor_m06A5DAB18D3385E8AED5DA84C8A89D9C7E8498F8(L_2, NULL);
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_3 = L_2;
		NullCheck(L_3);
		RoomOptions_set_IsVisible_m5D9ACD84A11FD6E37F023C2181653923AEE7AB25_inline(L_3, (bool)0, NULL);
		NullCheck(L_1);
		L_1->___RoomOptions_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___RoomOptions_1), (void*)L_3);
		__this->___voiceRoomParams_36 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceRoomParams_36), (void*)L_1);
		// public bool UseFusionAppSettings = true;
		__this->___UseFusionAppSettings_37 = (bool)1;
		// public bool UseFusionAuthValues = true;
		__this->___UseFusionAuthValues_38 = (bool)1;
		VoiceConnection__ctor_mDD2B56D6410FC2EFB93CE951934278B858BD7D52(__this, NULL);
		return;
	}
}
// System.Void Photon.Voice.Fusion.FusionVoiceClient::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FusionVoiceClient__cctor_m532AF7D6DA856EEE75D7059EC40D5E3FA9854243 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static byte[] memCompressedUInt64 = new byte[10];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		((FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_StaticFields*)il2cpp_codegen_static_fields_for(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var))->___memCompressedUInt64_40 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_StaticFields*)il2cpp_codegen_static_fields_for(FusionVoiceClient_t5AEA8B336C3E0E830AA13BC8445ED9533D4FC71E_il2cpp_TypeInfo_var))->___memCompressedUInt64_40), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Photon.Voice.ILogger Photon.Voice.Fusion.VoiceNetworkObject::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceNetworkObject_get_Logger_mB04850713723A898F337FE047518057A2C9393D8 (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) 
{
	{
		// protected Voice.ILogger Logger => voiceComponentImpl.Logger;
		VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* L_0 = __this->___voiceComponentImpl_17;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VoiceComponentImpl_get_Logger_m6E20399A6E734B3AC8EB490619C5493BB6270F00_inline(L_0, NULL);
		return L_1;
	}
}
// Photon.Voice.Unity.VoiceLogger Photon.Voice.Fusion.VoiceNetworkObject::get_VoiceLogger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* VoiceNetworkObject_get_VoiceLogger_mE4237F70ABDF148394D42187318C2C2D481BA67F (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceLogger VoiceLogger => voiceComponentImpl.VoiceLogger;
		VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* L_0 = __this->___voiceComponentImpl_17;
		NullCheck(L_0);
		VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* L_1;
		L_1 = VoiceComponentImpl_get_VoiceLogger_m68E547673757E3876B19470DCC87CB34E618E1E6_inline(L_0, NULL);
		return L_1;
	}
}
// Photon.Voice.Unity.Recorder Photon.Voice.Fusion.VoiceNetworkObject::get_RecorderInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* VoiceNetworkObject_get_RecorderInUse_m98EB0A537DAA9C74D6B9BAF3F57425BFEFFD5CE6 (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) 
{
	{
		// public Recorder RecorderInUse { get; private set; }
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_0 = __this->___U3CRecorderInUseU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void Photon.Voice.Fusion.VoiceNetworkObject::set_RecorderInUse(Photon.Voice.Unity.Recorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceNetworkObject_set_RecorderInUse_mAC7978CE573E68D5AC9B46AD69CFE625D491F714 (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Recorder RecorderInUse { get; private set; }
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_0 = ___0_value;
		__this->___U3CRecorderInUseU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRecorderInUseU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// Photon.Voice.Unity.Speaker Photon.Voice.Fusion.VoiceNetworkObject::get_SpeakerInUse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* VoiceNetworkObject_get_SpeakerInUse_m6EBF80B9F90F78438EB68F0403A970C75E621869 (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) 
{
	{
		// public Speaker SpeakerInUse { get; private set; }
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_0 = __this->___U3CSpeakerInUseU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void Photon.Voice.Fusion.VoiceNetworkObject::set_SpeakerInUse(Photon.Voice.Unity.Speaker)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceNetworkObject_set_SpeakerInUse_m6053CB8064868273B21E1C59E82C1DBFAE4E4F53 (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Speaker SpeakerInUse { get; private set; }
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_0 = ___0_value;
		__this->___U3CSpeakerInUseU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSpeakerInUseU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
// System.Boolean Photon.Voice.Fusion.VoiceNetworkObject::get_IsSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceNetworkObject_get_IsSpeaking_m07759ADDAE5B8DC20DB33D81FC47114217BB2C9F (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsSpeaking => this.SpeakerInUse != null && this.SpeakerInUse.IsPlaying;
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_0;
		L_0 = VoiceNetworkObject_get_SpeakerInUse_m6EBF80B9F90F78438EB68F0403A970C75E621869_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_2;
		L_2 = VoiceNetworkObject_get_SpeakerInUse_m6EBF80B9F90F78438EB68F0403A970C75E621869_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = Speaker_get_IsPlaying_m7F784C6E15456AD329779754D88D97E6C81BD842(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean Photon.Voice.Fusion.VoiceNetworkObject::get_IsRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceNetworkObject_get_IsRecording_m935DFD074AB59C9BEE2637ECC0D1D7F2177FCD8A (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsRecording => this.RecorderInUse != null && this.RecorderInUse.IsCurrentlyTransmitting;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_0;
		L_0 = VoiceNetworkObject_get_RecorderInUse_m98EB0A537DAA9C74D6B9BAF3F57425BFEFFD5CE6_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_2;
		L_2 = VoiceNetworkObject_get_RecorderInUse_m98EB0A537DAA9C74D6B9BAF3F57425BFEFFD5CE6_inline(__this, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = Recorder_get_IsCurrentlyTransmitting_m0DF2BF010EAC026A19DC9B9FD67A3712594B54C2(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean Photon.Voice.Fusion.VoiceNetworkObject::get_IsLocal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VoiceNetworkObject_get_IsLocal_mE98625D6B07F1ECB5CAEA409E95AD655B04AE89C (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsLocal => Runner.Topology == SimulationConfig.Topologies.Shared ? this.Object.HasStateAuthority : this.Object.HasInputAuthority;
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_0 = ((SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0*)__this)->___Runner_7;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = NetworkRunner_get_Topology_m8376FC947B68EE9E85978E091F420B988471B006(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_2 = ((SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0*)__this)->___Object_8;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkObject_get_HasInputAuthority_m09F41B4EB708280E2D3E873F6ECCBAB9BCDCF96E(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_4 = ((SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0*)__this)->___Object_8;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkObject_get_HasStateAuthority_m20DFCBB66C787E2B2ED94B31AC1035B62251CC07(L_4, NULL);
		return L_5;
	}
}
// System.Void Photon.Voice.Fusion.VoiceNetworkObject::SetupRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceNetworkObject_SetupRecorder_mE9E70367FADC9AEC3417CE18692963483346F9CF (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mDAB4705723E98C6792AE2864689F9C8182851FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BBA5BC812707330A06468A5C3E57AA6A3580C93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA06AECCB04AB8AD54A9052FE35A4E17436C9EF0);
		s_Il2CppMethodInitialized = true;
	}
	Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* V_0 = NULL;
	RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D* V_1 = NULL;
	{
		// Recorder recorder = null;
		V_0 = (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C*)NULL;
		// Recorder[] recorders = this.GetComponentsInChildren<Recorder>();
		RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D* L_0;
		L_0 = Component_GetComponentsInChildren_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mDAB4705723E98C6792AE2864689F9C8182851FEE(__this, Component_GetComponentsInChildren_TisRecorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C_mDAB4705723E98C6792AE2864689F9C8182851FEE_RuntimeMethod_var);
		V_1 = L_0;
		// if (recorders.Length > 0)
		RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D* L_1 = V_1;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_002c;
		}
	}
	{
		// if (recorders.Length > 1)
		RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D* L_2 = V_1;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		// this.Logger.LogWarning("Multiple Recorder components found attached to the GameObject or its children.");
		RuntimeObject* L_3;
		L_3 = VoiceNetworkObject_get_Logger_mB04850713723A898F337FE047518057A2C9393D8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_3, _stringLiteral1BBA5BC812707330A06468A5C3E57AA6A3580C93, L_4);
	}

IL_0028:
	{
		// recorder = recorders[0];
		RecorderU5BU5D_tAAB13195DDDDEAC2F7880901A37700F4D4429C1D* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = 0;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
	}

IL_002c:
	{
		// if (null == recorder && null != this.voiceConnection.PrimaryRecorder)
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_8, NULL);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_10 = __this->___voiceConnection_18;
		NullCheck(L_10);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_11;
		L_11 = VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_11, NULL);
		if (!L_12)
		{
			goto IL_0054;
		}
	}
	{
		// recorder = this.voiceConnection.PrimaryRecorder;
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_13 = __this->___voiceConnection_18;
		NullCheck(L_13);
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_14;
		L_14 = VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7_inline(L_13, NULL);
		V_0 = L_14;
	}

IL_0054:
	{
		// if (null == recorder)
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_15, NULL);
		if (!L_16)
		{
			goto IL_0074;
		}
	}
	{
		// this.Logger.LogWarning("Cannot find Recorder. Assign a Recorder to VoiceNetworkObject object or set up FusionVoiceClient.PrimaryRecorder.");
		RuntimeObject* L_17;
		L_17 = VoiceNetworkObject_get_Logger_mB04850713723A898F337FE047518057A2C9393D8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18;
		L_18 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_17);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_17, _stringLiteralEA06AECCB04AB8AD54A9052FE35A4E17436C9EF0, L_18);
		goto IL_008d;
	}

IL_0074:
	{
		// recorder.UserData = this.GetUserData();
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_19 = V_0;
		RuntimeObject* L_20;
		L_20 = VoiceNetworkObject_GetUserData_m9B6EE10B4D6B3A9D95B7F2A9AD38B9210ED3E895(__this, NULL);
		NullCheck(L_19);
		Recorder_set_UserData_m1C4EEB773903B76FAA6A48AD20B670189237CDE0(L_19, L_20, NULL);
		// this.voiceConnection.AddRecorder(recorder);
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_21 = __this->___voiceConnection_18;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_22 = V_0;
		NullCheck(L_21);
		bool L_23;
		L_23 = VoiceConnection_AddRecorder_mB900C30435DC2504DD5B8D1AC09EFF869026FC34(L_21, L_22, NULL);
	}

IL_008d:
	{
		// this.RecorderInUse = recorder;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_24 = V_0;
		VoiceNetworkObject_set_RecorderInUse_mAC7978CE573E68D5AC9B46AD69CFE625D491F714_inline(__this, L_24, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.VoiceNetworkObject::SetupSpeaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceNetworkObject_SetupSpeaker_mD80C4A9B7C8BE68F4D6C1E86306D5B531A30F125 (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_m62F935FB313C574220B837413E1E706B459EE5D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral069D00CD81A0C78251D80085C06669757E881DF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14727C2772E7388F0F563659C83865E67B93D390);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF9C9C23F7100943694DB45B8871B0A811B35C8);
		s_Il2CppMethodInitialized = true;
	}
	Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* V_0 = NULL;
	SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589* V_1 = NULL;
	{
		// Speaker speaker = null;
		V_0 = (Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE*)NULL;
		// Speaker[] speakers = this.GetComponentsInChildren<Speaker>(true);
		SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589* L_0;
		L_0 = Component_GetComponentsInChildren_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_m62F935FB313C574220B837413E1E706B459EE5D6(__this, (bool)1, Component_GetComponentsInChildren_TisSpeaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE_m62F935FB313C574220B837413E1E706B459EE5D6_RuntimeMethod_var);
		V_1 = L_0;
		// if (speakers.Length > 0)
		SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589* L_1 = V_1;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_002d;
		}
	}
	{
		// speaker = speakers[0];
		SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589* L_2 = V_1;
		NullCheck(L_2);
		int32_t L_3 = 0;
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// if (speakers.Length > 1)
		SpeakerU5BU5D_t219347C6659D7D19D460CE8790C5F285F35C1589* L_5 = V_1;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) <= ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		// this.Logger.LogWarning("Multiple Speaker components found attached to the GameObject or its children. Using the first one we found.");
		RuntimeObject* L_6;
		L_6 = VoiceNetworkObject_get_Logger_mB04850713723A898F337FE047518057A2C9393D8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_6, _stringLiteral14727C2772E7388F0F563659C83865E67B93D390, L_7);
	}

IL_002d:
	{
		// if (null == speaker && null != this.voiceConnection.SpeakerPrefab)
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_8, NULL);
		if (!L_9)
		{
			goto IL_005c;
		}
	}
	{
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_10 = __this->___voiceConnection_18;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = VoiceConnection_get_SpeakerPrefab_m826BAD6BF3DBF46103C4E21FFB9A164D9BBCF997_inline(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_11, NULL);
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// speaker = this.voiceConnection.InstantiateSpeakerPrefab(this.gameObject, false);
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_13 = __this->___voiceConnection_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_13);
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_15;
		L_15 = VoiceConnection_InstantiateSpeakerPrefab_mDD60AB3AD1E77FD893A7FB8FD131E099CDAAB8A1(L_13, L_14, (bool)0, NULL);
		V_0 = L_15;
	}

IL_005c:
	{
		// if (null == speaker)
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_16, NULL);
		if (!L_17)
		{
			goto IL_007c;
		}
	}
	{
		// this.Logger.LogError("No Speaker component or prefab found. Assign a Speaker to VoiceNetworkObject object or set up FusionVoiceClient.SpeakerPrefab.");
		RuntimeObject* L_18;
		L_18 = VoiceNetworkObject_get_Logger_mB04850713723A898F337FE047518057A2C9393D8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19;
		L_19 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void Photon.Voice.ILogger::LogError(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_18, _stringLiteral069D00CD81A0C78251D80085C06669757E881DF8, L_19);
		goto IL_0091;
	}

IL_007c:
	{
		// this.Logger.LogInfo("Speaker instantiated.");
		RuntimeObject* L_20;
		L_20 = VoiceNetworkObject_get_Logger_mB04850713723A898F337FE047518057A2C9393D8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(2 /* System.Void Photon.Voice.ILogger::LogInfo(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_20, _stringLiteral9BF9C9C23F7100943694DB45B8871B0A811B35C8, L_21);
	}

IL_0091:
	{
		// this.SpeakerInUse = speaker;
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_22 = V_0;
		VoiceNetworkObject_set_SpeakerInUse_m6053CB8064868273B21E1C59E82C1DBFAE4E4F53_inline(__this, L_22, NULL);
		// }
		return;
	}
}
// System.Object Photon.Voice.Fusion.VoiceNetworkObject::GetUserData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoiceNetworkObject_GetUserData_m9B6EE10B4D6B3A9D95B7F2A9AD38B9210ED3E895 (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return this.Object.Id;
		NetworkObject_t6AA3B74338F725B9B1C05D73EBC12AF9E9CC0E5C* L_0 = ((SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0*)__this)->___Object_8;
		NullCheck(L_0);
		NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 L_1 = L_0->___Id_8;
		NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2 L_2 = L_1;
		RuntimeObject* L_3 = Box(NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Void Photon.Voice.Fusion.VoiceNetworkObject::Spawned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceNetworkObject_Spawned_m5C3519F6886ECD5B0BD287AAC2B91EB8ED633218 (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mC02525F212FBAB52EA4209DB8C6FD548825C81D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18AE67BDB4F2509BD5E917CE7C52D7DFF4D6D425);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E6FBB99EF946A89020A8643C50F94224EE42BEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral965AC3461A475C0AD24FCBAAB874EC220A873703);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9809321E40AD6453315C75BD53DBD5843F1014D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// voiceComponentImpl.Awake(this);
		VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* L_0 = __this->___voiceComponentImpl_17;
		NullCheck(L_0);
		VoiceComponentImpl_Awake_m182804A770139122B8BEBD9C94545385BAE37D12(L_0, __this, NULL);
		// this.voiceConnection = this.Runner.GetComponent<VoiceConnection>();
		NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* L_1 = ((SimulationBehaviour_t39725B66BC703470FBE62B427C25F58B3B7054F0*)__this)->___Runner_7;
		NullCheck(L_1);
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_2;
		L_2 = Component_GetComponent_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mC02525F212FBAB52EA4209DB8C6FD548825C81D4(L_1, Component_GetComponent_TisVoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3_mC02525F212FBAB52EA4209DB8C6FD548825C81D4_RuntimeMethod_var);
		__this->___voiceConnection_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceConnection_18), (void*)L_2);
		// if (this.IsLocal)
		bool L_3;
		L_3 = VoiceNetworkObject_get_IsLocal_mE98625D6B07F1ECB5CAEA409E95AD655B04AE89C(__this, NULL);
		if (!L_3)
		{
			goto IL_0094;
		}
	}
	{
		// this.SetupRecorder();
		VoiceNetworkObject_SetupRecorder_mE9E70367FADC9AEC3417CE18692963483346F9CF(__this, NULL);
		// if (this.RecorderInUse == null)
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_4;
		L_4 = VoiceNetworkObject_get_RecorderInUse_m98EB0A537DAA9C74D6B9BAF3F57425BFEFFD5CE6_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0050;
		}
	}
	{
		// this.Logger.LogWarning("Recorder not setup for VoiceNetworkObject: playback may not work properly.");
		RuntimeObject* L_6;
		L_6 = VoiceNetworkObject_get_Logger_mB04850713723A898F337FE047518057A2C9393D8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_6);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_6, _stringLiteralE9809321E40AD6453315C75BD53DBD5843F1014D, L_7);
		goto IL_0094;
	}

IL_0050:
	{
		// if (!this.RecorderInUse.TransmitEnabled)
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_8;
		L_8 = VoiceNetworkObject_get_RecorderInUse_m98EB0A537DAA9C74D6B9BAF3F57425BFEFFD5CE6_inline(__this, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = Recorder_get_TransmitEnabled_mD117C665FA63F1C56E815F8808E6B5A02241F91E_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_0072;
		}
	}
	{
		// this.Logger.LogWarning("VoiceNetworkObject.RecorderInUse.TransmitEnabled is false, don't forget to set it to true to enable transmission.");
		RuntimeObject* L_10;
		L_10 = VoiceNetworkObject_get_Logger_mB04850713723A898F337FE047518057A2C9393D8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
		L_11 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_10);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_10, _stringLiteral3E6FBB99EF946A89020A8643C50F94224EE42BEE, L_11);
	}

IL_0072:
	{
		// if (!this.RecorderInUse.isActiveAndEnabled)
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_12;
		L_12 = VoiceNetworkObject_get_RecorderInUse_m98EB0A537DAA9C74D6B9BAF3F57425BFEFFD5CE6_inline(__this, NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_12, NULL);
		if (L_13)
		{
			goto IL_0094;
		}
	}
	{
		// this.Logger.LogWarning("VoiceNetworkObject.RecorderInUse may not work properly as RecordOnlyWhenEnabled is set to true and recorder is disabled or attached to an inactive GameObject.");
		RuntimeObject* L_14;
		L_14 = VoiceNetworkObject_get_Logger_mB04850713723A898F337FE047518057A2C9393D8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15;
		L_15 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_14);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_14, _stringLiteral965AC3461A475C0AD24FCBAAB874EC220A873703, L_15);
	}

IL_0094:
	{
		// this.SetupSpeaker();
		VoiceNetworkObject_SetupSpeaker_mD80C4A9B7C8BE68F4D6C1E86306D5B531A30F125(__this, NULL);
		// if (this.SpeakerInUse == null)
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_16;
		L_16 = VoiceNetworkObject_get_SpeakerInUse_m6EBF80B9F90F78438EB68F0403A970C75E621869_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_00be;
		}
	}
	{
		// this.Logger.LogWarning("Speaker not setup for VoiceNetworkObject: voice chat will not work.");
		RuntimeObject* L_18;
		L_18 = VoiceNetworkObject_get_Logger_mB04850713723A898F337FE047518057A2C9393D8(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19;
		L_19 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(1 /* System.Void Photon.Voice.ILogger::LogWarning(System.String,System.Object[]) */, ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075_il2cpp_TypeInfo_var, L_18, _stringLiteral18AE67BDB4F2509BD5E917CE7C52D7DFF4D6D425, L_19);
		return;
	}

IL_00be:
	{
		// this.voiceConnection.AddSpeaker(this.SpeakerInUse, this.GetUserData());
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_20 = __this->___voiceConnection_18;
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_21;
		L_21 = VoiceNetworkObject_get_SpeakerInUse_m6EBF80B9F90F78438EB68F0403A970C75E621869_inline(__this, NULL);
		RuntimeObject* L_22;
		L_22 = VoiceNetworkObject_GetUserData_m9B6EE10B4D6B3A9D95B7F2A9AD38B9210ED3E895(__this, NULL);
		NullCheck(L_20);
		bool L_23;
		L_23 = VoiceConnection_AddSpeaker_m255966C4FF57ACA47BA15C49CE3F65547ADEB02B(L_20, L_21, L_22, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.VoiceNetworkObject::Despawned(Fusion.NetworkRunner,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceNetworkObject_Despawned_mCFF93EDE48C069D4F0DD74F6E073A63BF2E14D43 (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* ___0_runner, bool ___1_hasState, const RuntimeMethod* method) 
{
	{
		// this.voiceConnection.RemoveRecorder(this.RecorderInUse);
		VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* L_0 = __this->___voiceConnection_18;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_1;
		L_1 = VoiceNetworkObject_get_RecorderInUse_m98EB0A537DAA9C74D6B9BAF3F57425BFEFFD5CE6_inline(__this, NULL);
		NullCheck(L_0);
		VoiceConnection_RemoveRecorder_m12180A6A74203EF2997F2011FD15CD2E59A83E97(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Voice.Fusion.VoiceNetworkObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceNetworkObject__ctor_m1ABBED621DD1DA5B4DC7583FFF65531AA113B158 (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private VoiceComponentImpl voiceComponentImpl = new VoiceComponentImpl();
		VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* L_0 = (VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90*)il2cpp_codegen_object_new(VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		VoiceComponentImpl__ctor_m1C339415DBAC499F34BE8A55F3D8CAA0314FD70E(L_0, NULL);
		__this->___voiceComponentImpl_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___voiceComponentImpl_17), (void*)L_0);
		NetworkBehaviour__ctor_m80B5DC72F7815EEC5B6DDF46B9AF965112268053(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VoiceConnection_get_UsePrimaryRecorder_m50587F8EEAE8AA3D379D8738E72F9128EE2B41C5_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsePrimaryRecorder => this.usePrimaryRecorder;
		bool L_0 = __this->___usePrimaryRecorder_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* VoiceConnection_get_PrimaryRecorder_m1DA6ED8BC914F3EAFBDC46288F5F0C70B904E5C7_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) 
{
	{
		// get => this.primaryRecorder;
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_0 = __this->___primaryRecorder_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* VoiceConnection_get_Client_mE6A4D18E641A8567EE490AE5A81ECC9468F8B30F_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) 
{
	{
		// public new LoadBalancingTransport Client { get { return this.client; } }
		LoadBalancingTransport_tCBC427B25D0F207FCC8E751172AE1402A5230C80* L_0 = __this->___client_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkId_get_IsValid_mB187D7E27086E68CB506465288650AEC6A42EB4E_inline (NetworkId_t55BD78F35465C7B51581907AC1DB01F8568237F2* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___Raw_4;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* VoiceNetworkObject_get_SpeakerInUse_m6EBF80B9F90F78438EB68F0403A970C75E621869_inline (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) 
{
	{
		// public Speaker SpeakerInUse { get; private set; }
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_0 = __this->___U3CSpeakerInUseU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB* NetworkRunner_get_SessionInfo_m8E7EDE44DB7D97AA9573EA0CB1C9BC0761D8F867_inline (NetworkRunner_tEB731E5822AE5C584747D8D3BDA75386725AC12A* __this, const RuntimeMethod* method) 
{
	{
		SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB* L_0 = __this->___U3CSessionInfoU3Ek__BackingField_49;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionInfo_get_Name_m3BB6976C2C53839B7E75A3CD326C2A1555078DFC_inline (SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* LoadBalancingClient_get_CurrentRoom_mADB06D45AD1F8289D93F08F322C9FDB694EAC291_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public Room CurrentRoom { get; set; }
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0 = __this->___U3CCurrentRoomU3Ek__BackingField_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Room_get_Name_m8C466150335A007F72B11711AB64F9F62288D500_inline (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) 
{
	{
		// return this.name;
		String_t* L_0 = ((RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D*)__this)->___name_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SessionInfo_get_Region_m979863C8A75595985C638ECCE43174E955DBFDE0_inline (SessionInfo_t191C09E2A2B9A71925D9B0EDEA501A286FD4BCAB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRegionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m3E453140CA632A1F55A0BB96ECA5F61A878F838E_inline (AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_mFD417A06D769F51083D11C4BC6F7C2B698095232_inline (AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAuthGetParametersU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m1414AD92FAC10BA328BF31068ED47CB16ECF0E07_inline (AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string AuthGetParameters { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CAuthGetParametersU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthGetParametersU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthType_m56996D622EEB81A2482DDCDCB1459EE56FE332EE_inline (AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { authType = value; }
		uint8_t L_0 = ___0_value;
		__this->___authType_0 = L_0;
		// set { authType = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadBalancingClient_set_AuthValues_mAFB66C3CFA04587CBA1A60711581B2BA6C6FD84C_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___0_value, const RuntimeMethod* method) 
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_0 = ___0_value;
		__this->___U3CAuthValuesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthValuesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AuthenticationValues_get_AuthPostData_m6193DF5F2347E2E843BE98CC4A27FF1A324D35FE_inline (AuthenticationValues_t966D2FC1B918F833E8AF124E7FD256C9C1FCD982* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAuthPostDataU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* LoadBalancingClient_get_AuthValues_m58A41749A2B67F2B76EDD8C8B28A32FAA60977AA_inline (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) 
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* L_0 = __this->___U3CAuthValuesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayerRef_op_Equality_mDE02A4E3B6FC2CE8E570A1DFE9A4A58965CDDFB0_inline (PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___0_a, PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC ___1_b, const RuntimeMethod* method) 
{
	{
		PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC L_0 = ___0_a;
		int32_t L_1 = L_0.____index_1;
		PlayerRef_tFAC74D9C43A58F5E8E2959C36FFCB98B7E834EDC L_2 = ___1_b;
		int32_t L_3 = L_2.____index_1;
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RoomOptions_set_IsVisible_m5D9ACD84A11FD6E37F023C2181653923AEE7AB25_inline (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_0 = ___0_value;
		__this->___isVisible_0 = L_0;
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VoiceComponentImpl_get_Logger_m6E20399A6E734B3AC8EB490619C5493BB6270F00_inline (VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* __this, const RuntimeMethod* method) 
{
	{
		// public Voice.ILogger Logger => logger;
		LoggerImpl_t2B330C78FD8F62B3C3EFEE700F502A7CCF31EAA6* L_0 = __this->___logger_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* VoiceComponentImpl_get_VoiceLogger_m68E547673757E3876B19470DCC87CB34E618E1E6_inline (VoiceComponentImpl_t0F6CF304701B2CD643B645A6378645F69E396C90* __this, const RuntimeMethod* method) 
{
	{
		// public VoiceLogger VoiceLogger => voiceLogger;
		VoiceLogger_t43ABA98917D5D00D8121A67D03DDB5EDB721F0D7* L_0 = __this->___voiceLogger_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* VoiceNetworkObject_get_RecorderInUse_m98EB0A537DAA9C74D6B9BAF3F57425BFEFFD5CE6_inline (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, const RuntimeMethod* method) 
{
	{
		// public Recorder RecorderInUse { get; private set; }
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_0 = __this->___U3CRecorderInUseU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoiceNetworkObject_set_RecorderInUse_mAC7978CE573E68D5AC9B46AD69CFE625D491F714_inline (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Recorder RecorderInUse { get; private set; }
		Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* L_0 = ___0_value;
		__this->___U3CRecorderInUseU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRecorderInUseU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* VoiceConnection_get_SpeakerPrefab_m826BAD6BF3DBF46103C4E21FFB9A164D9BBCF997_inline (VoiceConnection_tB1A14C698697002D8D57FA47F332A44E7E294DB3* __this, const RuntimeMethod* method) 
{
	{
		// get => this.speakerPrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___speakerPrefab_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VoiceNetworkObject_set_SpeakerInUse_m6053CB8064868273B21E1C59E82C1DBFAE4E4F53_inline (VoiceNetworkObject_tD7B8A64446EEEA9A82B2903FF0FB74918D293B5A* __this, Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Speaker SpeakerInUse { get; private set; }
		Speaker_tBD124E6AEFF169667A9441881B3A98F122AE4ADE* L_0 = ___0_value;
		__this->___U3CSpeakerInUseU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSpeakerInUseU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Recorder_get_TransmitEnabled_mD117C665FA63F1C56E815F8808E6B5A02241F91E_inline (Recorder_t1C736AA65E77CD851B67FCA224A9B72A53DC1F0C* __this, const RuntimeMethod* method) 
{
	{
		// get { return this.transmitEnabled; }
		bool L_0 = __this->___transmitEnabled_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
